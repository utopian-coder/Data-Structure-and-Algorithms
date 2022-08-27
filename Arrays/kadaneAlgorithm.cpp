class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = INT_MIN, currSum = 0, n = nums.size();

        for (int i = 0; i < n; i++)
        {
            currSum += nums[i];

            if (currSum > sum)
                sum = currSum;

            if (currSum < 0)
                currSum = 0;
        }

        return sum;
    }
};