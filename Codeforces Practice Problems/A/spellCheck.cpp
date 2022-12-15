#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int
#define vi vector<int>
#define pb push_back

void solve(string str)
{
  unordered_map<char, int> mppName;
  unordered_map<char, int> mppStr;

  string name = "Tumir";

  for (char x : name)
    mppName[x]++;
  for (char y : str)
    mppStr[y]++;

  if (mppName == mppStr)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    string str;
    cin >> str;

    if (n != 5)
      cout << "NO" << '\n';
    else
      solve(str);
  }

  return 0;
}
