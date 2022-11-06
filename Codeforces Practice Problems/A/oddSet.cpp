#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

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

        int odd = 0, even = 0;

        rep(i, 0, 2 * n)
        {
            int curr;
            cin >> curr;

            if (curr % 2 == 0)
                ++even;
            else
                ++odd;
        }

        if (even == odd)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
