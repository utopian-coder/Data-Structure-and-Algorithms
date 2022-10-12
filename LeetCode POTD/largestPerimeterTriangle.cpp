class Solution
{
public:
    int largestPerimeter(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int s1, s2, s3, n = nums.size();

        for (int i = n - 1; i > 1; i--)
        {
            s1 = nums[i];
            cout << s1 << endl;

            if (nums[i - 1] + nums[i - 2] > s1)
            {
                s2 = nums[i - 1];
                s3 = nums[i - 2];

                return (s1 + s2 + s3);
            }
        }

        return 0;
    }
};