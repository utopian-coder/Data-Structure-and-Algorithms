#include <bits/stdc++.h>
using namespace std;

bool isLuckyHelper(int num)
{
    while (num > 0)
    {
        if ((num % 10 == 4) || (num % 10 == 7))
            num /= 10;
        else
            return false;
    }

    return true;
}

void isLucky(int num)
{
    if (isLuckyHelper(num))
    {
        cout << "YES";
        return;
    }

    int n = num / 2;

    for (int i = 4; i <= n; i++)
    {
        if (isLuckyHelper(i) && num % i == 0)
        {
            cout << "YES";
            return;
        }
    }

    cout << "NO";
}

int main()
{
    int num;
    cin >> num;

    isLucky(num);

    return 0;
}
