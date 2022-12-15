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

    int n, k, curr = 0, res = 0;
    cin >> n >> k;

    int maxi = 240 - k;

    rep(i, 1, n + 1)
    {
        curr += i * 5;
        if (curr > maxi)
            break;
        res++;
    }

    cout << res << endl;

    return 0;
}
