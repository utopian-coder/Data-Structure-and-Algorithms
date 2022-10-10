class Solution
{
public:
    string breakPalindrome(string palindrome)
    {
        int n = palindrome.size();
        if (n == 1)
            return "";

        string ans = palindrome;

        for (int i = 0; i < n; i++)
        {
            int backPointer = n - 1 - i;
            if (backPointer == i)
                continue; // Mid element

            if (palindrome[i] != 'a')
            {
                ans[i] = 'a';
                return ans;
            }
        }

        ans[n - 1] = 'b'; // When all the char are 'a'

        return ans;
    }
};