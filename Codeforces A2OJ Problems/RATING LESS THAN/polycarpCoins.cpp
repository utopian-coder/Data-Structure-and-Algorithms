#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

void countOneTwo(int n)
{
    int res = n / 3;

    if (n % 3 == 0)
        cout << res << " " << res << endl;
    else if (n % 3 == 1)
        cout << res + 1 << " " << res << endl;
    else
        cout << res << " " << res + 1 << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        countOneTwo(n);
    }

    return 0;
}
