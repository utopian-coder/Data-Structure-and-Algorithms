#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

string solve(string str)
{
    int n = str.size();
    if (n <= 3)
        return str;

    string res = "";
    int l = 0, wubCount = 0;

    while (l < n)
    {
        if (l < n - 2 && str[l] == 'W' && str[l + 1] == 'U' && str[l + 2] == 'B')
        {
            if (wubCount == 0 && !res.empty())
                res += " ";
            l += 3;
            wubCount++;
        }
        else
        {
            wubCount = 0;
            res += str[l++];
        }
    }

    return res;
}

int main()
{
    string str;
    cin >> str;

    cout << solve(str) << endl;

    return 0;
}
