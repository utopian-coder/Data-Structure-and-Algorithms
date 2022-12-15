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

    int n, h, ans = 0;
    cin >> n >> h;

    rep(i, 0, n)
    {
        int curr;
        cin >> curr;

        if (curr > h)
            ans += 2;
        else
            ++ans;
    }

    cout << ans << endl;

    return 0;
}
