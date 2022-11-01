#include <bits/stdc++.h>
using namespace std;

void sortString(string str)
{
    sort(str.begin(), str.end());

    for (int i = 0, n = str.size(); i < n; i++)
    {
        if (str[i] == '+')
            continue;
        if (i == n - 1)
            cout << str[i] << "\n";
        else
            cout << str[i] << '+';
    }

    return;
}

int main()
{
    string str;
    cin >> str;

    sortString(str);

    return 0;
}
