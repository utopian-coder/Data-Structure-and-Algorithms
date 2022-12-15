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

    string s1, s2, res = "";
    cin >> s1 >> s2;

    rep(i, 0, s1.length())
    {
        if (s1[i] == s2[i])
            res += '0';
        else
            res += '1';
    }

    cout << res << endl;

    return 0;
}
