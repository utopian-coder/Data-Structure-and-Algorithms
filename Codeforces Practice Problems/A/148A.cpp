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

    int k, l, m, n, d, res = 0;
    cin >> k >> l >> m >> n >> d;

    rep(i, 1, d + 1)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            ++res;
        }
    }

    cout << res << endl;

    return 0;
}
