#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

int solve(int a[], int n, string s)
{
    int res = 0;

    rep(i, 0, n)
    {
        if (s[i] == '1')
        {
            int prev = i - 1;
            int next = i + 1;

            if (prev >= 0 && a[prev] > a[i] && s[prev] == '0')
            {
                res += a[prev];
                s[i] = '0';
            }
            else if (next <= n - 1 && prev >= 0 && a[prev] > a[next] && s[prev] == '0' && s[next] == '1')
            {
                res += a[prev];
                s[i] = '0';
            }
            else
            {
                res += a[i];
            }
        }
    }

    return res;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int a[n];
        rep(i, 0, n) cin >> a[i];

        cout << solve(a, n, s) << endl;
    }

    return 0;
}
