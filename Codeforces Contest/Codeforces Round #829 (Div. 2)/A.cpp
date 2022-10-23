#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

void solve(string s, int n)
{
    if (s[n - 1] == 'Q')
    {
        cout << "No" << endl;
        return;
    }

    int i = n - 1, a = 0, q = 0;

    while (i >= 0)
    {
        if (s[i] == 'A')
            ++a;
        else
            ++q;

        if (q > a)
        {
            cout << "No" << endl;
            return;
        }

        i--;
    }

    cout << "Yes" << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        solve(s, n);
    }

    return 0;
}
