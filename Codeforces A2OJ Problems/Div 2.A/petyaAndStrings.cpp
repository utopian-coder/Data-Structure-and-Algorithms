#include <bits/stdc++.h>
using namespace std;

int solve(string s1, string s2)
{
    for (int i = 0, n = s1.size(); i < n; i++)
    {
        char a = tolower(s1[i]);
        char b = tolower(s2[i]);

        if (a > b)
            return 1;
        else if (a < b)
            return -1;
        else
            continue;
    }

    return 0;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    cout << solve(s1, s2);

    return 0;
}
