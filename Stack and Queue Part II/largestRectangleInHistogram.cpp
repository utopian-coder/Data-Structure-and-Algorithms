class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        int rightSmaller[n], leftSmaller[n];

        stack<int> st;

        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && heights[st.top()] >= heights[i])
                st.pop();

            if (st.empty())
            {
                leftSmaller[i] = 0;
            }
            else
            {
                leftSmaller[i] = st.top() + 1;
            }

            st.push(i);
        }

        while (!st.empty())
            st.pop();

        for (int j = n - 1; j >= 0; j--)
        {
            while (!st.empty() && heights[st.top()] >= heights[j])
                st.pop();

            if (st.empty())
            {
                rightSmaller[j] = n - 1;
            }
            else
            {
                rightSmaller[j] = st.top() - 1;
            }

            st.push(j);
        }

        int maxArea = 0;

        for (int k = 0; k < n; k++)
        {
            int currArea = (rightSmaller[k] - leftSmaller[k] + 1) * heights[k];
            maxArea = max(maxArea, currArea);
        }

        return maxArea;
    }
};