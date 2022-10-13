#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

void solve(int arr[], int n)
{
    unordered_map<int, int> mpp;

    rep(i, 0, n)
    {
        if (mpp.find(arr[i]) != mpp.end())
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            mpp[arr[i]] = 1;
        }
    }

    cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        rep(i, 0, n) cin >> arr[i];

        solve(arr, n);
    }

    return 0;
}
