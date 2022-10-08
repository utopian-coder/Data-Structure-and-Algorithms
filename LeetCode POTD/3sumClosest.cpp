class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int minDiff = INT_MAX, closest;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++)
        {
            int j = i + 1, k = n - 1;

            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum == target)
                    return sum;
                else if (sum < target)
                    j++;
                else
                    k--;

                int currDiff = abs(target - sum);

                if (currDiff < minDiff)
                {
                    minDiff = currDiff;
                    closest = sum;
                }
            }
        }

        return closest;
    }
};