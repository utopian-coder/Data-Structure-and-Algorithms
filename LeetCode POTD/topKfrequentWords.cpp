class Solution
{
    static bool compare(pair<string, int> &a, pair<string, int> &b)
    {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second > b.second;
    }

public:
    vector<string> topKFrequent(vector<string> &words, int k)
    {
        unordered_map<string, int> mpp;
        for (string word : words)
            mpp[word]++;
        vector<pair<string, int>> pq;

        for (auto it : mpp)
            pq.push_back({it.first, it.second});
        sort(pq.begin(), pq.end(), compare);

        vector<string> res;

        for (int i = 0; i < pq.size(); i++)
        {
            if (k)
            {
                res.push_back(pq[i].first);
                k--;
            }
            else
            {
                break;
            }
        }

        return res;
    }
};