#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

void solve(int n, bool flag)
{
    rep(i, 1, n - 2)
    {
        cout << i + 1 << " " << i << " ";
        ++i;
    }

    if (flag)
        cout << n << " " << n - 1 << "\n";
    else
        cout << n << " " << n - 2 << " " << n - 1 << "\n";
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

        solve(n, n % 2 == 0);
    }

    return 0;
}
