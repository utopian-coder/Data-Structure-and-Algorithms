#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mat[5][5];
    pair<int, int> pos;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] != 0)
                pos = {i, j};
        }
    }

    int diffRow = abs(2 - pos.first);
    int diffCol = abs(2 - pos.second);

    cout << diffCol + diffRow;

    return 0;
}
