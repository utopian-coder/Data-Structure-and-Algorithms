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

    int n, maxi, mini, res = 0;
    cin >> n >> maxi;

    mini = maxi;

    rep(i, 1, n)
    {
        int curr;
        cin >> curr;

        if (curr > maxi)
        {
            ++res;
            maxi = curr;
        }
        else if (curr < mini)
        {
            ++res;
            mini = curr;
        }
    }

    cout << res << endl;

    return 0;
}
