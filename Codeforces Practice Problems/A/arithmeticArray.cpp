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

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int sum = 0;

        rep(i, 0, n)
        {
            int x;
            cin >> x;
            sum += x;
        }

        if (sum == n)
            cout << 0 << endl;
        else if (sum < n)
            cout << 1 << endl;
        else
            cout << sum - n << endl;
    }

    return 0;
}
