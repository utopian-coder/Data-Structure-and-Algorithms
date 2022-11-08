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
        int n;
        cin >> n;

        vector<int> v(n);
        for (int &e : v)
            cin >> e;

        int maxPos = max_element(v.begin(), v.end()) - v.begin();
        int minPos = min_element(v.begin(), v.end()) - v.begin();

        int res = min({max(maxPos, minPos) + 1,
                       (n - 1) - min(maxPos, minPos) + 1,
                       (n - 1) - maxPos + minPos + 2,
                       (n - 1) - minPos + maxPos + 2});

        cout << res << "\n";
    }

    return 0;
}
