class Solution {
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length(), m=text2.size();
        vector<vector<int>> dp(n+1, vector<int> (m+1));
        for (int i=0; i<=n; i++) {
            dp[i][0] = 0;
        }
        for (int j=0; j<=m; j++) {
            dp[0][j] = 0;
        }
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=m; j++) {
                if (text1[i-1]==text2[j-1]) dp[i][j] = dp[i-1][j-1] +1;
                else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }

  public:
    int minOperations(string &s1, string &s2) {
        // Your code goes here
        int lcs = longestCommonSubsequence(s1, s2);
        return s1.length()+s2.length() - 2*lcs;
    }
};200