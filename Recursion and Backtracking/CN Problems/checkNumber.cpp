#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPresent(int a[], int n, int x)
    {
        if (n == 0)
            return false; // edge case

        if (n == 1) // base case
        {
            if (a[0] == x)
                return true;
            return false;
        }

        return a[0] == x || isPresent(a + 1, n - 1, x);
    }
};

int main()
{
    int n, x;
    cin >> n >> x;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    Solution ob;
    cout << (ob.isPresent(a, n, x) ? "YES" : "NO") << endl;

    return 0;
}
