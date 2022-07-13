class Solution
{
    void helper(vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &temp, int st)
    {
        if (st == candidates.size())
        {
            if (target == 0)
            {
                ans.push_back(temp);
            }
            return;
        }

        if (candidates[st] <= target)
        {
            temp.push_back(candidates[st]);
            helper(candidates, target - candidates[st], ans, temp, st);
            temp.pop_back();
        }

        helper(candidates, target, ans, temp, st + 1);
    }

public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> temp;

        helper(candidates, target, ans, temp, 0);

        return ans;
    }
};