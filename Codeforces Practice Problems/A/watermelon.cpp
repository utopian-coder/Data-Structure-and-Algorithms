#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void print(int wt)
    {
        if (wt <= 3)
        {
            cout << "NO";
            return;
        }

        string ans = wt & 1 ? "NO" : "YES";
        cout << ans;
    }
};

int main()
{
    int wt;
    cin >> wt;

    Solution ob;
    ob.print(wt);

    return 0;
}
