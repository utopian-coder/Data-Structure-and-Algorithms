#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = a; i >= n; i--)
#define ll long long int
#define vi vector<int>
#define pb push_back

int findMinOperation(vi &a)
{
    int gcd = 0, n = a.size();
    rep(i, 0, n) gcd = __gcd(gcd, a[i]);

    if (gcd == 1)
        return 0;

    if (__gcd(gcd, n) == 1)
        return 1;

    if (__gcd(gcd, n - 1) == 1)
        return 2;

    return 3;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vi a(n);
        rep(i, 0, n) cin >> a[i];

        cout << findMinOperation(a) << endl;
    }

    return 0;
}
