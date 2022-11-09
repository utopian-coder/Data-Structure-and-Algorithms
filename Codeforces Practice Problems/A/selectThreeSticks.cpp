#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int
#define vi vector<int>
#define pb push_back

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
        for (int &x : a)
            cin >> x;

        sort(a.begin(), a.end());

        int res = INT_MAX;
        rep(i, 2, n) res = min(res, a[i] - a[i - 2]);

        cout << res << endl;
    }

    return 0;
}
