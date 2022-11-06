#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

int main()
{
    int n, x = 0, y = 0, z = 0;
    cin >> n;

    int arr[n][3];

    rep(i, 0, n)
    {
        rep(j, 0, 3)
        {
            cin >> arr[i][j];

            if (j == 0)
                x += arr[i][j];
            if (j == 1)
                y += arr[i][j];
            if (j == 2)
                z += arr[i][j];
        }
    }

    if (x == 0 && y == 0 && z == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
