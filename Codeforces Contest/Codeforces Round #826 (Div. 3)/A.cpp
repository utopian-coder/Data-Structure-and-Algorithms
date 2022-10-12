#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)

bool checkIfSame(string a, string b, int n)
{
    rep(i, 0, n) if (a[i] != b[i]) return false;
    return true;
}

char findSize(string str, int n)
{
    rep(i, 0, n) if (str[i] != 'X') return str[i];
}

void solve(string a, string b)
{
    int aSize = a.size();
    int bSize = b.size();

    if (aSize == bSize)
    {
        if (checkIfSame(a, b, aSize))
        {
            cout << "="
                 << "\n";
            return;
        }
    }

    char sizeIndicatorA = findSize(a, aSize);
    char sizeIndicatorB = findSize(b, bSize);

    unordered_map<char, int> mpp = {{'L', 3}, {'M', 2}, {'S', 1}};

    if (sizeIndicatorA != sizeIndicatorB)
    {
        if (mpp[sizeIndicatorA] > mpp[sizeIndicatorB])
            cout << ">"
                 << "\n";
        else
            cout << "<"
                 << "\n";

        return;
    }

    if (sizeIndicatorA == 'S')
    {
        if (aSize > bSize)
            cout << "<"
                 << "\n";
        else
            cout << ">"
                 << "\n";

        return;
    }

    if (aSize > bSize)
        cout << ">"
             << "\n";
    else
        cout << "<"
             << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a >> b;

        solve(a, b);
    }

    return 0;
}
