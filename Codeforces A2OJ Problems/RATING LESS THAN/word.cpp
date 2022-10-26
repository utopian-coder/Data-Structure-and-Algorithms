#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

bool isMoreUpper(string str)
{
    int n = str.size();
    int lower = 0, upper = 0;

    rep(i, 0, n)
    {
        if (islower(str[i]))
            ++lower;
        else
            ++upper;
    }

    return upper > lower ? true : false;
}

void modString(string str)
{
    bool flag = isMoreUpper(str);
    if (flag)
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    else
        transform(str.begin(), str.end(), str.begin(), ::tolower);

    cout << str << endl;
}

int main()
{
    string str;
    cin >> str;

    modString(str);

    return 0;
}
