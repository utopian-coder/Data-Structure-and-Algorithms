#include <bits/stdc++.h>
using namespace std;

void modString(string str)
{
    if (str.size() <= 10)
    {
        cout << str << "\n";
        return;
    }

    string temp = "";
    temp += str[0];
    temp += to_string(str.size() - 2);
    temp += str[str.size() - 1];

    cout << temp << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        modString(str);
    }
    return 0;
}
