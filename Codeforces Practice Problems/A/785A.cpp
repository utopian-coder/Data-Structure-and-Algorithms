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

    unordered_map<string, int> mpp;
    mpp["Tetrahedron"] = 4;
    mpp["Cube"] = 6;
    mpp["Octahedron"] = 8;
    mpp["Dodecahedron"] = 12;
    mpp["Icosahedron"] = 20;

    int t, res = 0;
    cin >> t;

    while (t--)
    {
        string in;
        cin >> in;

        res += mpp[in];
    }

    cout << res << endl;

    return 0;
}
