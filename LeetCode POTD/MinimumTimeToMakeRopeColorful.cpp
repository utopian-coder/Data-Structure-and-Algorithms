class Solution
{
public:
    int minCost(string colors, vector<int> &neededTime)
    {
        int res = 0;

        for (int i = 0, n = colors.size(); i < n - 1; i++)
        {
            if (colors[i] == colors[i + 1])
            {
                if (neededTime[i] > neededTime[i + 1])
                {
                    res += neededTime[i + 1];
                    swap(neededTime[i], neededTime[i + 1]);
                }
                else
                {
                    res += neededTime[i];
                }
            }
        }

        return res;
    }
};