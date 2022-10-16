#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

void solve(string s, int n, char c)
{
    vector<int> cIdx;
    vector<int> gIdx;

    int maxi = INT_MIN;

    rep(i, 0, n)
    {
        if (s[i] == c)
            cIdx.push_back(i + 1);
        if (s[i] == 'g')
            gIdx.push_back(i + 1);
    }

    rep(i, 0, cIdx.size())
    {
        int dist = -1;
        int currC = cIdx[i];

        rep(j, 0, gIdx.size())
        {
            int currG = gIdx[j];

            if (currC <= currG)
            {
                dist = currG - currC;
                maxi = max(dist, maxi);
                break;
            }
        }

        if (dist == -1)
        {
            dist = n - currC + gIdx[0];
            maxi = max(maxi, dist);
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
        char c;

        cin >> n >> c;

        string s;
        cin >> s;

        solve(s, n, c);
    }

    return 0;
}
