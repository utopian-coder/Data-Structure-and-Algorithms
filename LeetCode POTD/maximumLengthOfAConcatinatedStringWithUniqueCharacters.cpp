class Solution
{
    int isUnique(string str)
    {
        vector<int> mpp(26, 0);
        for (char x : str)
        {
            if (mpp[x - 'a'] != 0) return -1;
            mpp[x - 'a']++;
        }

        return str.length();
    }

    void maxUnique(vector<string>& arr, int idx, int& maxi, string current)
    {
        if (idx == arr.size())
        {
            if (isUnique(current) > maxi)
            {
                maxi = current.length();
                return;
            }

            return;
        }

        maxUnique(arr, idx + 1, maxi, current + arr[idx]);
        maxUnique(arr, idx + 1, maxi, current);
    }
public:
    int maxLength(vector<string>& arr)
    {
        int maxi = 0;
        maxUnique(arr, 0, maxi, "");

        return maxi;
    }
};