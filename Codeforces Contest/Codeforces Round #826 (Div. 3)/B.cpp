#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    if (n % 2 == 0)
    {
        for (int i = n; i >= 1; i--)
        {
            cout << i << " ";
        }

        cout << endl;
        return;
    }

    if (n == 3)
    {
        cout << -1 << endl;
        return;
    }

    if (n == 5)
    {
        cout << 3 << " " << 4 << " " << 5 << " " << 2 << " " << 1 << endl;
        return;
    }

    int mid = (n / 2) + 1;
    for (int j = n; j >= 1; j--)
    {
        // special case mid and mid + 1
        if (j == mid)
        {
            cout << mid + 1 << " ";
            continue;
        }

        if (j == mid + 1)
        {
            cout << mid << " ";
            continue;
        }

        cout << j << " ";
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        solve(n);
    }

    return 0;
}
