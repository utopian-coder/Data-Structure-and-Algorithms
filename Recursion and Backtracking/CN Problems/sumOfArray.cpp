#include <iostream>
using namespace std;

class Solution
{
public:
    int sumOfArr(int arr[], int n)
    {
        if (n == 1)
            return arr[0];

        return arr[0] + sumOfArr(arr + 1, n - 1);
    }
};

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Solution ob;
    cout << ob.sumOfArr(arr, n) << endl;

    return 0;
}
