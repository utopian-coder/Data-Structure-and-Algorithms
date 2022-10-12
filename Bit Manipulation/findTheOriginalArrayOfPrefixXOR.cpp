class Solution
{
public:
    vector<int> findArray(vector<int> &pref)
    {
        int n = pref.size(), prevXOR = pref[0];
        vector<int> res(n);
        res[0] = pref[0];

        for (int i = 1; i < n; i++)
        {
            res[i] = pref[i] ^ prevXOR;
            prevXOR = pref[i];
        }

        return res;
    }
};