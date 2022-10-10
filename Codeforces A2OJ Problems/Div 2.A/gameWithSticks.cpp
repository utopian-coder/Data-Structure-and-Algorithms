#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, flag = 0;
    cin >> n >> m;

    int totalInterSections = n * m;

    while (totalInterSections != 0)
    {
        ++flag;
        totalInterSections -= (n + m - 1);
        --n;
        --m;
    }

    if (flag % 2 == 0)
        cout << "Malvika";
    else
        cout << "Akshat";

    return 0;
}
