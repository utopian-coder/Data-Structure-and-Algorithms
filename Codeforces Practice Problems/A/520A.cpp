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

    string str;
    cin >> str;

    for (char i = 'a'; i <= 'z'; i++)
    {
        bool flag = false;

        for (int j = 0; j < n; j++)
        {
            char curr = tolower(str[j]);

            if (curr == i)
            {
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}
