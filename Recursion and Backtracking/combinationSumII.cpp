class Solution
{
    void helper(vector<int> &nums, int idx, vector<vector<int>> &ans, vector<int> &ds, int x)
    {
        if (x == 0)
        {
            ans.push_back(ds);
            return;
        }

        for (int i = idx, n = nums.size(); i < n; i++)
        {
            if (i > idx && nums[i] == nums[i - 1])
                continue;
            if (nums[i] > x)
                break;

            ds.push_back(nums[i]);
            helper(nums, i + 1, ans, ds, x - nums[i]);
            ds.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> temp;

        sort(candidates.begin(), candidates.end());

        helper(candidates, 0, ans, temp, target);

        return ans;
    }
};