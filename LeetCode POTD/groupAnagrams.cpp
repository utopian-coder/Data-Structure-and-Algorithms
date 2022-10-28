class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        map<map<char, int>, vector<string>> mpp;

        for (string str : strs)
        {
            map<char, int> smap;
            for (char x : str)
                smap[x]++;

            if (mpp.count(smap))
            {
                mpp[smap].push_back(str);
            }
            else
            {
                vector<string> temp;
                temp.push_back(str);
                mpp[smap] = temp;
            }
        }

        vector<vector<string>> res;
        for (auto it : mpp)
            res.push_back(it.second);

        return res;
    }
};