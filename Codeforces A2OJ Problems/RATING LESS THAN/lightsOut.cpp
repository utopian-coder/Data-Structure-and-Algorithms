#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

int pressed[3][3];
int currState[3][3];

void mod(int i, int j)
{
    if (i - 1 >= 0)
        currState[i - 1][j] = currState[i - 1][j] == 1 ? 0 : 1;
    if (i + 1 < 3)
        currState[i + 1][j] = currState[i + 1][j] == 1 ? 0 : 1;
    if (j - 1 >= 0)
        currState[i][j - 1] = currState[i][j - 1] == 1 ? 0 : 1;
    if (j + 1 < 3)
        currState[i][j + 1] = currState[i][j + 1] == 1 ? 0 : 1;
}

void lightsOut()
{
    rep(i, 0, 3)
    {
        rep(j, 0, 3)
        {
            int curr = pressed[i][j];
            if (curr % 2 == 0)
                continue;

            currState[i][j] = currState[i][j] == 1 ? 0 : 1;
            mod(i, j);
        }
    }

    rep(i, 0, 3)
    {
        rep(j, 0, 3)
        {
            cout << currState[i][j];
        }
        cout << '\n';
    }
}

int main()
{
    rep(i, 0, 3)
    {
        rep(j, 0, 3)
        {
            cin >> pressed[i][j];
            currState[i][j] = 1;
        }
    }

    lightsOut();

    return 0;
}
