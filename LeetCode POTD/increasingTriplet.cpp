class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        int ith = nums[0], kth = INT_MIN, n = nums.size();

        for (int i = 1; i < n; i++)
        {
            if (nums[i] <= ith)
                ith = nums[i];
            else

            {
                if (kth == INT_MIN)
                    kth = nums[i];
                else
                {
                    if (kth < nums[i])
                        return true;
                    else
                        kth = nums[i];
                }
            }
        }

        return false;
    }
};