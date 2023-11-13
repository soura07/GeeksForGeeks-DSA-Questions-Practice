class Solution {
    public:
    int shortestCommonSupersequence(string x, string y, int m, int n) {
        vector<vector<int>> dp(m+1, vector<int> (n+1,0));
        for (int i = 1; i<=m; i++) {
            for (int j = 1; j<=n; j++) {
                if (x[i-1] == y[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return m+n-dp[m][n];
    }
};
