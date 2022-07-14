class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int count = 0, majority;

        for (int num : nums)
        {
            if (count == 0)
                majority = num;

            if (num == majority)
            {
                count++;
            }
            else
            {
                count--;
            }
        }

        return majority;
    }
};