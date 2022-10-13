#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

bool isCoprime(int a, int b)
{
    int gcd = __gcd(a, b);
    return gcd == 1 ? true : false;
}

int solve(int arr[], int n)
{
    int maxi = -1;

    rep(i, 0, n - 1)
    {
        rep(j, i + 1, n)
        {
            if (isCoprime(arr[i], arr[j]))
            {
                maxi = max(maxi, (i + j));
            }
        }
    }

    return maxi;
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

        rep(i, 0, n) cin >> arr[n];

        cout << solve(arr, n) << endl;
    }

    return 0;
}
