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

    int n;
    cin >> n;

    string res = "I hate";

    rep(i, 2, n + 1)
    {
        if (i % 2 == 0)
            res += " that I love";
        else
            res += " that I hate";
    }

    res += " it";

    cout << res << endl;

    return 0;
}
