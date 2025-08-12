class Solution {
public:
    int numberOfWays(int n, int x) {
        const int MOD = 1e9 + 7;
        vector<int> dp(n + 1, 0);
        dp[0] = 1; // 1 way to make sum 0

        for (int base = 1; ; base++) {
            long long p = pow(base, x);
            if (p > n) break;

            // Iterate backwards to ensure each base is used at most once
            for (int sum = n; sum >= p; sum--) {
                dp[sum] = (dp[sum] + dp[sum - p]) % MOD;
            }
        }

        return dp[n];
    }
};