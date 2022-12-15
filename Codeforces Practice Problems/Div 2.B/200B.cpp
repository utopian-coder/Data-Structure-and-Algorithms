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

    double n, sum = 0;
    cin >> n;

    rep(i, 0, n)
    {
        double curr;
        cin >> curr;

        sum += curr;
    }

    double res = sum / n;

    cout << res << endl;

    return 0;
}
