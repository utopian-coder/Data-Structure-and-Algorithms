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

    int n, police = 0, res = 0;
    cin >> n;

    rep(i, 0, n)
    {
        int curr;
        cin >> curr;

        if (curr > 0)
            police += curr;
        else
        {
            if (police > 0)
                police--;
            else
                ++res;
        }
    }

    cout << res << endl;

    return 0;
}
