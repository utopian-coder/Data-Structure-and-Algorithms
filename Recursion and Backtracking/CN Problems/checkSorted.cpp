#include <iostream>
using namespace std;

class Solution
{
public:
    bool isSorted(int arr[], int n)
    {
        if (n == 0 || n == 1)
            return true;

        if (arr[0] > arr[1])
            return false;

        return isSorted(arr + 1, n - 1);
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
    if (ob.isSorted(arr, n))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
