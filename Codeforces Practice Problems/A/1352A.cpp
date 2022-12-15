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

    int t;
    cin >> t;

    while (t--)
    {
        vector<int> ans;

        int n, x = 1;
        cin >> n;

        while (n)
        {
            x *= 10;
            int p = n % x;

            if (p)
                ans.push_back(p);
            n -= p;
        }

        cout << ans.size() << endl;

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
