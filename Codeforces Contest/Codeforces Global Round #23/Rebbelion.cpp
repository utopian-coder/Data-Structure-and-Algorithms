#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = a; i >= 0; i--)
#define ll long long int

int solve(int a[], int n)
{
    if (is_sorted(a, a + n))
        return 0;

    int l, r, ans = 0;

    rep(i, 0, n)
    {
        if (a[i] == 1)
        {
            l = i;
            break;
        }
    }

    per(j, n - 1, 0)
    {
        if (a[j] == 0)
        {
            r = j;
            break;
        }
    }

    while (l < r)
    {
        if (a[l] == 1 && a[r] == 0)
        {
            ++l;
            --r;
            ++ans;
        }
        else if (a[l] == 0)
        {
            ++l;
        }
        else if (a[r] == 1)
        {
            --r;
        }
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        rep(i, 0, n) cin >> a[i];

        cout << solve(a, n) << endl;
    }

    return 0;
}
