#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    void helper(int arr[], int n, int x, vector<int> &res)
    {
        if (n == 0)
            return;

        helper(arr + 1, n - 1, x, res);

        for (int i = 0, n = res.size(); i < n; i++)
            res[i]++;

        if (arr[0] == x)
            res.push_back(0);
    }

public:
    vector<int> allIndices(int arr[], int n, int x)
    {
        vector<int> res;
        helper(arr, n, x, res);

        return res;
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
    vector<int> res = ob.allIndices(arr, n, x);

    for (int x : res)
        cout << x << " ";

    return 0;
}
