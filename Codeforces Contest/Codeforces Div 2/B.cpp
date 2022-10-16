#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

void modify(vector<int> &arr, int type, int num)
{
    int size = arr.size();

    rep(i, 0, size)
    {
        if (type == 0)
        {
            if (arr[i] % 2 == 0)
                arr[i] += num;
        }
        else
        {
            if (arr[i] % 2 != 0)
                arr[i] += num;
        }
    }
}

ll add(vector<int> &arr)
{
    int n = arr.size();
    ll sum = 0;
    rep(i, 0, n) sum += arr[i];

    return sum;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<int> arr;

        rep(i, 0, n)
        {
            int x;
            cin >> x;

            arr.push_back(x);
        }

        rep(j, 0, q)
        {
            int type, num;
            cin >> type >> num;

            modify(arr, type, num);

            ll sum = add(arr);
            cout << sum << endl;
        }
    }

    return 0;
}
