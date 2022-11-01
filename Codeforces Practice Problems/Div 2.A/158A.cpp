#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n + 1];
    rep(i, 1, n + 1) cin >> a[i];

    int count = 0;

    rep(i, 1, n + 1)
    {
        if (a[i] >= a[k] && a[i] > 0)
            ++count;
    }

    cout << count << endl;

    return 0;
}
