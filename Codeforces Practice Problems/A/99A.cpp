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

    ll n, res = 0;
    cin >> n;

    while (n >= 100)
    {
        n -= 100;
        res++;
    }

    while (n >= 20)
    {
        n -= 20;
        res++;
    }

    while (n >= 10)
    {
        n -= 10;
        res++;
    }

    while (n >= 5)
    {
        n -= 5;
        res++;
    }

    res += n;
    cout << res << endl;

    return 0;
}
