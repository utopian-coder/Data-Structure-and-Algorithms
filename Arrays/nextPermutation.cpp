class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int breakPoint = -1, smallestLArgerThanBreakPoint = -1, n = nums.size();

        for (int i = n - 1; i >= 1; i--)
        {
            if (nums[i] > nums[i - 1])
            {
                breakPoint = i - 1;
                break;
            }
        }

        if (breakPoint == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }

        for (int j = n - 1; j >= 0; j--)
        {
            if (nums[j] > nums[breakPoint])
            {
                smallestLArgerThanBreakPoint = j;
                break;
            }
        }

        swap(nums[breakPoint], nums[smallestLArgerThanBreakPoint]);
        reverse(nums.begin() + breakPoint + 1, nums.end());
    }
};