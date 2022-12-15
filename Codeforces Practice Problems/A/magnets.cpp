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

    int n, ans = 1;
    string prev;
    cin >> n >> prev;

    rep(i, 1, n)
    {
        string curr;
        cin >> curr;

        if (prev[1] == curr[0])
            ++ans;
        prev = curr;
    }

    cout << ans << endl;

    return 0;
}
