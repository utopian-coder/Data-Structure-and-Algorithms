#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maximum = arr[0], minimum = arr[0], maxPos = 0, minPos = 0;

    for (int j = 1; j < n; j++)
    {
        if (arr[j] > maximum)
        {
            maxPos = j;
            maximum = arr[j];
        }

        if (arr[j] <= minimum)
        {
            minPos = j;
            minimum = arr[j];
        }
    }

    int res;

    if (maxPos < minPos)
        res = maxPos + (n - 1 - minPos);
    else
        res = maxPos + (n - 2 - minPos);

    cout << res;

    return 0;
}
