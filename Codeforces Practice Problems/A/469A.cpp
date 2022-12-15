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

    int n, p, q, flag = 1;
    cin >> n;

    unordered_set<int> st;

    cin >> p;

    rep(i, 0, p)
    {
        int l;
        cin >> l;

        st.insert(l);
    }

    cin >> q;

    rep(i, 0, q)
    {
        int l;
        cin >> l;

        st.insert(l);
    }

    rep(i, 1, n + 1)
    {
        if (st.find(i) == st.end())
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
