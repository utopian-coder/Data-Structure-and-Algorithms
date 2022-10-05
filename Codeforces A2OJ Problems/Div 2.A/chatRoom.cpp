#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    int n = s.size(), count = 0, j = 0;
    string dummy = "hello";

    for (int i = 0; i < n; i++)
    {
        if (s[i] == dummy[j])
        {
            count++;
            j++;
        }

        if (count == 5)
            break;
    }

    if (count == 5)
        cout << "YES";
    else
        cout << "NO";

    return;
}

int main()
{
    string s;
    cin >> s;

    solve(s);

    return 0;
}
