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

    set<char> st;

    string str;
    getline(cin, str);

    rep(i, 0, str.length())
    {
        char curr = str[i];

        if (curr >= 'a' && curr <= 'z')
            st.insert(curr);
    }

    cout << st.size() << endl;

    return 0;
}
