class Solution
{

    void helper(vector<int> &nums, int idx, vector<int> &ds, vector<vector<int>> &ans)
    {
        ans.push_back(ds);

        for (int i = idx, n = nums.size(); i < n; i++)
        {
            if (i != idx && nums[i] == nums[i - 1])
                continue;
            ds.push_back(nums[i]);
            helper(nums, i + 1, ds, ans);
            ds.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {

        vector<int> temp;
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        helper(nums, 0, temp, ans);

        return ans;
    }
};
