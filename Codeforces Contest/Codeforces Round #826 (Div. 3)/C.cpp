#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

int solve(int arr[], int n)
{
    int minLen = INT_MAX, fixedSegVal = 0, nextSegVal, currSegMaxLen, nextSegLen;

    rep(i, 0, n - 1)
    {
        fixedSegVal += arr[i];
        currSegMaxLen = i + 1;
        nextSegVal = 0;
        nextSegLen = 0;

        int j = i + 1;

        while (j < n)
        {

            nextSegVal += arr[j];
            ++nextSegLen;

            if (nextSegVal > fixedSegVal)
                break;

            if (nextSegVal == fixedSegVal)
            {
                nextSegVal = 0;
                currSegMaxLen = max(currSegMaxLen, nextSegLen);
                nextSegLen = 0;
            }

            j++;
        }

        if (nextSegVal == 0)
        {
            minLen = min(currSegMaxLen, minLen);
        }
    }

    if (minLen == INT_MAX)
        minLen = n;

    return minLen;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        rep(i, 0, n) cin >> arr[i];

        cout << solve(arr, n) << endl;
    }

    return 0;
}
