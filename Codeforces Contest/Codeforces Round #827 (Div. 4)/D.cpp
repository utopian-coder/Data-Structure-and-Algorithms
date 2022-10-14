#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

bool isCoprime(int x, int y)
{
    return __gcd(x, y) == 1;
}

void solve(vector<pair<int, int>> &unique)
{
    int n = unique.size(), maxi = -1;

    rep(i, 0, n)
    {
        rep(j, i, n)
        {
            if (unique[i].first != -1)
            {
                int x = unique[i].first;
                int y = unique[j].first;

                if (isCoprime(x, y))
                {
                    int curr = unique[i].second + unique[j].second;
                    maxi = max(maxi, curr);
                }
            }
        }
    }

    cout << maxi << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> pairs(1001, {-1, -1});

        rep(i, 1, n + 1)
        {
            int val;
            cin >> val;

            pair<int, int> curr;
            curr.first = val;
            curr.second = i;

            pairs[val] = curr;
        }

        solve(pairs);
    }

    return 0;
}
