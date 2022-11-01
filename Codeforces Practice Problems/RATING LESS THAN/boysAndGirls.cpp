#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

int main()
{
    string s;
    cin >> s;

    unordered_map<char, int> mpp;
    for (char x : s)
        mpp[x]++;

    int size = mpp.size();

    if (size % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}
