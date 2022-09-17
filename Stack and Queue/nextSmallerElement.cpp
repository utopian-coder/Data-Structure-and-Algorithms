vector<int> Solution::prevSmaller(vector<int> &A)
{
    vector<int> res;
    stack<int> st;

    for (int i = 0, n = A.size(); i < n; i++)
    {
        while (!st.empty() && A[i] <= st.top())
        {
            st.pop();
        }

        if (!st.empty())
        {
            res.push_back(st.top());
        }
        else
        {
            res.push_back(-1);
        }

        st.push(A[i]);
    }

    return res;
}
