#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

void solve(int a[], int b[], int n)
{
    int positiveDelta = 0, negativeDelta = 0;

    rep(i, 0, n)
    {
        int diff = b[i] - a[i];
        if (diff >= 0)
            positiveDelta += diff;
        else
            negativeDelta += diff;
    }

    if (positiveDelta == 0 && negativeDelta == 0)
    {
        cout << 0 << endl;
        return;
    }

    int absoluteNegDel = abs(negativeDelta);

    if (positiveDelta != absoluteNegDel)
    {
        cout << -1 << endl;
        return;
    }

    unordered_map<int, int> mpp;
    rep(i, 0, n)
    {
        int delta = b[i] - a[i];
        mpp[i] = delta;
    }

    vector<pair<int, int>> ans;

    rep(i, 0, n)
    {
        int del = mpp[i];
        if (del == 0)
            continue;
        int flag = del > 0 ? 1 : -1;

        rep(j, 0, n)
        {
            if (i == j)
                continue;

            if (flag == -1 && mpp[j] > 0)
            {
                int mini = min(abs(del), mpp[j]);
                del += mini;
                mpp[j] -= mini;

                rep(k, 0, mini)
                {
                    ans.push_back({i + 1, j + 1});
                }
            }
        }
    }

    cout << positiveDelta << endl;
    rep(i, 0, positiveDelta)
    {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n], b[n];

        rep(i, 0, n) cin >> a[i];
        rep(i, 0, n) cin >> b[i];

        solve(a, b, n);
    }

    return 0;
}
