#include <bits/stdc++.h>
using namespace std;

void minNumOfCoins(int arr[], int n, int sum)
{
    int count = 0, currSum = 0;
    sort(arr, arr + n);

    for (int i = n - 1; i >= 0; i--)
    {
        currSum += arr[i];
        sum -= arr[i];
        ++count;

        if (currSum > sum)
            break;
    }

    cout << count;
}

int main()
{
    int n;
    cin >> n;

    int arr[n], sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    minNumOfCoins(arr, n, sum);

    return 0;
}
