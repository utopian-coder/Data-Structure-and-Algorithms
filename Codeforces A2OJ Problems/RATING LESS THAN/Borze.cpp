#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

int main()
{
    string s, res;
    cin >> s;

    int n = s.size(), i = 0;
    while (i < n - 1)
    {
        if (s[i] == '.')
        {
            res += '0';
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            res += '1';
            i += 2;
        }
        else if (s[i] == '-' && s[i + 1] == '-')
        {
            res += '2';
            i += 2;
        }
    }

    if (i != n)
        res += '0';

    cout << res << endl;

    return 0;
}
