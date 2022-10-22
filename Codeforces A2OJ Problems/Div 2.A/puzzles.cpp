#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

int solve(int n, int a[], int m)
{
    sort(a, a + m);
    int i = 0, j = n - 1;

    int res = INT_MAX;

    while (j < m)
    {
        int diff = a[j] - a[i];
        res = res > diff ? diff : res;

        ++i;
        ++j;
    }

    return res;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int a[m];
    rep(i, 0, m) cin >> a[i];

    cout << solve(n, a, m) << endl;

    return 0;
}
