#include <iostream>
using namespace std;

class Solution
{
public:
    int firstOccurence(int *arr, int n, int x)
    {
        if (n == 0)
            return -1;
        if (arr[0] == x)
            return 0;

        int small = firstOccurence(arr + 1, n - 1, x);

        if (small != -1)
            small++;

        return small;
    }
};

int main()
{
    int n, x;
    cin >> n >> x;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Solution ob;
    cout << ob.firstOccurence(arr, n, x) << endl;

    return 0;
}
