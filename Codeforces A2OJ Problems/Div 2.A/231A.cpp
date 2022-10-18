#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

int main()
{
    int n;
    cin >> n;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        rep(i, 0, 3)
        {
            int x;
            cin >> x;
            sum += x;
        }

        if (sum >= 2)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
