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

    vector<ll> shoes;

    rep(i, 0, 4)
    {
        ll x;
        cin >> x;
        shoes.push_back(x);
    }

    sort(shoes.begin(), shoes.end());

    int res = 0;

    rep(i, 1, 4)
    {
        if (shoes[i - 1] == shoes[i])
            ++res;
    }

    cout << res << endl;

    return 0;
}
