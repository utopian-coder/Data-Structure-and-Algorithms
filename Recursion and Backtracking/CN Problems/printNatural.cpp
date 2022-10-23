#include <iostream>
using namespace std;

class Solution
{
public:
    void printNat(int n)
    {
        if (n == 1)
        {
            cout << n << " ";
            return;
        }

        printNat(n - 1);
        cout << n << " ";
    }
};

int main()
{
    int n;
    cin >> n;

    Solution ob;
    ob.printNat(n);

    return 0;
}
