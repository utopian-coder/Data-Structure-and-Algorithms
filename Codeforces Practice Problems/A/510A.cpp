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

    int n, m;
    cin >> n >> m;

    char arr[n][m];
    bool flag = true;

    rep(i, 0, n)
    {
        if (i % 2 == 0)
        {
            rep(j, 0, m) arr[i][j] = '#';
        }
        else
        {
            rep(j, 0, m)
            {
                arr[i][j] = '.';
            }

            if (flag)
            {
                arr[i][m - 1] = '#';
                flag = false;
            }
            else
            {
                arr[i][0] = '#';
                flag = true;
            }
        }
    }

    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            cout << arr[i][j];
        }

        cout << endl;
    }

    return 0;
}
