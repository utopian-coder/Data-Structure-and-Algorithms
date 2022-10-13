
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

void solve(vector<vector<char>> &mat)
{
    int flag;

    rep(i, 0, 8)
    {
        flag = 1;

        rep(j, 0, 7)
        {

            if (mat[i][j] != mat[i][j + 1])
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1 && mat[i][0] != '.')
        {
            cout << mat[i][0] << endl;
            return;
        }
    }

    rep(j, 0, 8)
    {
        flag = 1;

        rep(i, 0, 7)
        {
            if (mat[i][j] != mat[i + 1][j])
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1 && mat[0][j] != '.')
        {
            cout << mat[0][j] << endl;
            return;
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<vector<char>> mat(8, vector<char>(8));
        rep(i, 0, 8)
                rep(j, 0, 8) cin >>
            mat[i][j];

        solve(mat);
    }

    return 0;
}
