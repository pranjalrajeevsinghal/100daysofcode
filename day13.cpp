// Qlink-> https://leetcode.com/problems/climbing-stairs/description/
// Code-

int climbStairs(int n) {
        vector<int> dp(n+10);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 3;
        for (int i = 4; i <= n; ++i) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
