#include <bits/stdc++.h>
using namespace std;

bool isSame(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

pair<pair<int, int>, pair<int, int>> countOnesAndZeroes(int a[], int b[], int n)
{
    int cao = 0, cbo = 0, caz = 0, cbz = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            ++cao;
        else
            ++caz;

        if (b[i] == 1)
            ++cbo;
        else
            ++cbz;
    }

    pair<int, int> countA = {cao, caz};
    pair<int, int> countB = {cbo, cbz};

    pair<pair<int, int>, pair<int, int>> res = {countA, countB};

    return res;
}

void modArr(int a[], int b[], int n, int flag, int diff)
{
    for (int i = 0; i < n; i++)
    {

        if ((a[i] == 1 && b[i] == 0) && flag == 0)
        {
            a[i] = 0;
            diff--;

            if (diff == 0)
                break;
        }

        if ((a[i] == 0 && b[i] == 1) && flag == 1)
        {
            a[i] = 1;
            diff--;
            if (diff == 0)
                break;
        }
    }
}

int solve(int a[], int b[], int n)
{
    if (isSame(a, b, n)) // already same
        return 0;

    pair<pair<int, int>, pair<int, int>> oneAndZeroCount = countOnesAndZeroes(a, b, n);

    int oneA = oneAndZeroCount.first.first;
    int zeroA = oneAndZeroCount.first.second;
    int oneB = oneAndZeroCount.second.first;
    int zeroB = oneAndZeroCount.second.second;

    if (oneA == oneB && zeroA == zeroB)
        return 1; // only rearrange

    int diffOne = INT_MIN, diffZero = INT_MIN, flag, res;

    if (oneA > oneB)
    {
        flag = 0;
        diffOne = oneA - oneB;
        modArr(a, b, n, flag, diffOne);
        res = diffOne;
    }

    if (zeroA > zeroB)
    {
        flag = 1;
        diffZero = zeroA - zeroB;
        modArr(a, b, n, flag, diffZero);
        res = diffZero;
    }

    if (isSame(a, b, n))
        return res; // rearrange req after modification
    return res + 1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n], b[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int j = 0; j < n; j++)
            cin >> b[j];

        cout << solve(a, b, n) << "\n";
    }

    return 0;
}
