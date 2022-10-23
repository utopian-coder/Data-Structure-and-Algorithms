#include <iostream>
using namespace std;

class Solution
{
public:
    int pow(int x, int n)
    {
        if (n == 0)
            return 1;
        return x * pow(x, n - 1);
    }
};

int main()
{
    int x, n;
    cin >> x >> n;

    Solution ob;
    cout << ob.pow(x, n) << endl;

    return 0;
}
