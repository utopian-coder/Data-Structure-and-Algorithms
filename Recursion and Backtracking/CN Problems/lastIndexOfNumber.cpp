#include <iostream>
using namespace std;

class Solution
{
public:
    int lastOccurence(int arr[], int n, int x)
    {
        if (n == 0)
            return -1;

        int small = lastOccurence(arr + 1, n - 1, x);

        if (small == -1)
            return arr[0] == x ? 0 : -1;

        return small + 1;
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
    cout << "Last Index Of " << x << " --> " << ob.lastOccurence(arr, n, x) << endl;

    return 0;
}
