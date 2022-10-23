#include <iostream>
using namespace std;

class Solution
{
public:
    int numOfDigits(int n)
    {
        if (n < 10)
            return 1;
        int small = numOfDigits(n / 10);
        return small + 1;
    }
};

int main()
{
    int n;
    cin >> n;

    Solution ob;
    cout << ob.numOfDigits(n) << endl;

    return 0;
}
