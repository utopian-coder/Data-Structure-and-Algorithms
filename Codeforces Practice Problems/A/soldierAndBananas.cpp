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

    ll k, w, n, total = 0;
    cin >> k >> n >> w;

    rep(i, 1, w + 1) total += i * k;

    if (n >= total)
        cout << 0 << endl;
    else
        cout << total - n << endl;

    return 0;
}
