#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

bool isDistinct(string s)
{
    unordered_map<char, int> mpp;
    for (char x : s)
    {
        if (mpp.find(x) != mpp.end())
            return false;
        mpp[x]++;
    }

    return true;
}

int main()
{
    int y;
    cin >> y;

    while (true)
    {
        ++y;

        if (isDistinct(to_string(y)))
        {
            cout << y << endl;
            break;
        }
    }

    return 0;
}
