class Solution
{
    long long int memo(int n, int k, int target, vector<vector<long long int>> &dp)
    {
        if (target < 0)
            return 0;
        if (n == 0 && target == 0)
            return 1;
        if (n != 0 && target == 0)
            return 0;
        if (n == 0 && target != 0)
            return 0;

        if (dp[n][target] != -1)
            return dp[n][target];

        long long int ans = 0;

        for (int i = 1; i <= k; i++)
        {
            ans += memo(n - 1, k, target - i, dp) % 1000000007;
        }

        return dp[n][target] = ans % 1000000007;
    }

public:
    int numRollsToTarget(int n, int k, int target)
    {
        vector<vector<long long int>> dp(n + 1, vector<long long int>(target + 1, -1));
        long long int res = memo(n, k, target, dp);

        cout << res;

        return (int)res % 1000000007;
    }
};