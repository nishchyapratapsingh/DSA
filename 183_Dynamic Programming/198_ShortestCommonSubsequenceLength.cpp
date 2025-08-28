// User function template for C++

class Solution {
  public:
    // Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string &s1, string &s2) {
        // code here
        int n=s1.length(), m=s2.length();
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        for (int i=1; i<=n; ++i) {
            for (int j=0; j<=m; ++j) {
                if (s1[i-1]==s2[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        int lcs = dp[n][m];
        return m+n-lcs;
    }
};