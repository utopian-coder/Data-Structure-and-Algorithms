#include <bits/stdc++.h>
using namespace std;

int solve(pair<int, int> uni[], int n)
{
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        pair<int, int> host = uni[i];

        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (host.first == uni[j].second)
                ++res;
        }
    }

    return res;
}

int main()
{
    int n, h, g;
    cin >> n;

    pair<int, int> uniforms[n];

    for (int i = 0; i < n; i++)
    {
        cin >> h >> g;
        uniforms[i] = {h, g};
    }

    cout << solve(uniforms, n);

    return 0;
}
