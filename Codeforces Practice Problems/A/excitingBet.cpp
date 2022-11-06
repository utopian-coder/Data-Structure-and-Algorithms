#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int
#define endl "\n"

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        if (a == b)
            cout << 0 << " " << 0 << endl;
        else
        {
            ll g = abs(a - b);
            ll m = min(a % g, g - b % g);
            cout << g << " " << m << endl;
        }
    }

    return 0;
}
