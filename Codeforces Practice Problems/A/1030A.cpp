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

    int n, flag = 0;
    cin >> n;

    while (n--)
    {
        int curr;
        cin >> curr;

        if (curr == 1)
        {
            cout << "HARD" << endl;
            flag = 1;
            break;
        }
    }

    if (!flag)
        cout << "EASY" << endl;

    return 0;
}
