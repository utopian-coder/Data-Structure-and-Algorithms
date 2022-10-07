#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, givenGiftToNum;
    cin >> n;
    int arr[n + 1];

    for (int i = 1; i < n + 1; i++)
    {
        cin >> givenGiftToNum;
        arr[givenGiftToNum] = i;
    }

    for (int i = 1; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
