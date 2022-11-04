#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, x, t;
        cin >> n >> x >> t;

        long long d = min(t / x, n - 1);
        cout << (n - d) * d + (d * (d - 1)) / 2 << endl;
    }

    return 0;
}
