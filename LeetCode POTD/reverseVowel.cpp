class Solution
{
    bool isVowel(char x)
    {
        return x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u';
    }
public:
    string reverseVowels(string s)
    {
        int i = 0, j = s.size() - 1;

        while (i < j)
        {
            if (isVowel(tolower(s[i])) && isVowel(tolower(s[j])))
            {
                swap(s[i], s[j]);
                i++; j--;
            }
            else if (isVowel(tolower(s[i])))
            {
                j--;
            }
            else if (isVowel(tolower(s[j])))
            {
                i++;
            }
            else
            {
                i++; j--;
            }
        }

        return s;
    }
};