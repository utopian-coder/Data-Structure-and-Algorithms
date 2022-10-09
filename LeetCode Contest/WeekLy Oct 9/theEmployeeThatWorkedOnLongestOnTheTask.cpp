class Solution
{
public:
    int hardestWorker(int n, vector<vector<int>> &logs)
    {

        vector<vector<int>> maxIdMaxTime;
        int prevTaskEndTime = logs[0][1];
        maxIdMaxTime.push_back(logs[0]);

        for (int i = 1; i < n; i++)
        {
            int currTaskEnd = logs[i][1];
            int timeTook = prevTaskEndTime - currTaskEnd;
            int prevMaxTime = maxIdMaxTime[0][1];

            if (timeTook > prevMaxTime)
            {
                prevMaxTime = timeTook;
                maxIdMaxTime.pop_back();
                maxIdMaxTime.push_back({logs[i][0], timeTook});
            }

            prevTaskEndTime = currTaskEnd;
        }

        return maxIdMaxTime[0][0];
    }
};