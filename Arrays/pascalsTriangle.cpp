class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans;
        vector<int> x(1, 1);

        ans.push_back(x);

        for (int i = 1; i < numRows; i++)
        {
            vector<int> temp(1, 1);

            for (int j = 1; j < i; j++)
            {
                vector<int> prevRow = ans[i - 1];
                int nextElement = prevRow[j - 1] + prevRow[j];
                temp.push_back(nextElement);
            }

            temp.push_back(1);
            ans.push_back(temp);
        }

        return ans;
    }
};