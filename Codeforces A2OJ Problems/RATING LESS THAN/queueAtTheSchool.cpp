#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

void solve(string &st, int t, int n)
{
    rep(i, 0, t)
    {
        string temp = "";

        int j = 0;
        while (j < n - 1)
        {
            if (st[j] == 'B' && st[j + 1] == 'G')
            {
                temp += "GB";
                j += 2;
            }
            else
            {
                temp += st[j];
                ++j;
            }
        }

        if (temp.length() < st.length())
            temp += st[n - 1];

        st = temp;
    }
}

int main()
{
    int n, t;
    cin >> n >> t;

    string arrangement;
    cin >> arrangement;

    solve(arrangement, t, n);
    cout << arrangement << endl;

    return 0;
}
