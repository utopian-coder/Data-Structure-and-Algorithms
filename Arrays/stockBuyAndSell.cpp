class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minimum = prices[0], profit = 0;

        for (int i = 1, n = prices.size(); i < n; i++)
        {
            int currProfit = 0;

            if (prices[i] > minimum)
                currProfit = prices[i] - minimum;
            if (prices[i] < minimum)
                minimum = prices[i];
            if (currProfit > profit)
                profit = currProfit;
        }

        return profit;
    }
};