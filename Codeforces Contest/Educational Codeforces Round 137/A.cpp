#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

int solve(int num)
{
    int res = (num * (num - 1)) / 2;
    return res * 6;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        rep(i, 0, n) cin >> a[i];

        cout << solve(10 - n) << endl;
    }

    return 0;
}
