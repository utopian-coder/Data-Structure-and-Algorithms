#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int
#define vi vector<int>
#define pb push_back

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int mTickets = n / m;
    int nTickets = n % m;
    int nTicketsCost = nTickets * a;

    int cost = nTicketsCost < b ? (mTickets * b) + nTicketsCost : (mTickets + 1) * b;
    int nCost = n * a;

    cout << (nCost < cost ? nCost : cost) << endl;

    return 0;
}
