
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int flag = 0;

        rep(i, 0, 8)
        {
            string str;
            cin >> str;

            if (str == "RRRRRRRR")
                flag = 1;
        }

        if (flag)
            cout << "R" << endl;
        else
            cout << "B" << endl;
    }

    return 0;
}
