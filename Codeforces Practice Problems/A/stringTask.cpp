#include <bits/stdc++.h>
using namespace std;

void modString(string str)
{
    unordered_set<char> st({'A', 'E', 'I', 'O', 'U', 'Y', 'y', 'a', 'e', 'i', 'o', 'u'});
    vector<char> dummy;

    for (int i = 0, n = str.size(); i < n; i++)
    {
        if (st.find(str[i]) == st.end())
        {
            dummy.push_back('.');
            dummy.push_back(tolower(str[i]));
        }
    }

    for (char x : dummy)
        cout << x;
}

int main()
{
    string str;
    cin >> str;

    modString(str);

    return 0;
}
