class Solution
{
public:
    string minWindow(string s, string t)
    {
        unordered_map<char, int> mppT;
        unordered_map<char, int> mppS;
        int i = 0, j = 0, matchCount = 0, desiredCount = t.length(), n = s.length();
        string res = "";

        for (char x : t) mppT[x]++;

        while (true)
        {
            bool l1 = false;
            bool l2 = false;

            while (i < n && matchCount < desiredCount)
            {
                char curr = s[i];
                mppS[curr]++;
                if (mppS[curr] <= mppT[curr]) ++matchCount;
                i++;

                l1 = true;
            }

            while (j < i && matchCount == desiredCount)
            {
                string temp = s.substr(j, (i - j));
                int len = res.length(), currLen = temp.length();
                if (len == 0 || len > currLen) res = temp;

                char curr = s[j];
                mppS[curr]--;

                if (mppS[curr] < mppT[curr]) matchCount--;
                j++;

                l2 = true;
            }

            if (!l1 && !l2) break;
        }

        return res;
    }
};