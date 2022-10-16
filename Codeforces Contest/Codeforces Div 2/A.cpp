#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

string solve(int arr[], int n, string s)
{
    rep(i, 0, n - 1)
    {
        rep(j, i + 1, n)
        {
            if (arr[i] == arr[j] && s[i] != s[j])
                return "NO";
        }
    }

    return "YES";
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

        string s;
        cin >> s;

        cout << solve(arr, n, s) << endl;
    }

    return 0;
}
