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

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    unordered_map<char, int> mppOriginal;
    unordered_map<char, int> mppDup;

    for (char x : s1)
        mppOriginal[x]++;
    for (char x : s2)
        mppOriginal[x]++;
    for (char x : s3)
        mppDup[x]++;

    if (mppOriginal == mppDup)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
