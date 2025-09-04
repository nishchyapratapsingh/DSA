class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.length(), m=t.length();
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        for (int i=1; i<=n; ++i) {
            for (int j=1; j<=m; ++j) {
                if (s[i-1]==t[j-1]) dp[i][j] = dp[i-1][j-1]+1;
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return n==dp[n][m];
    }
};  


//2 pointer approach
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.length();
        int m=t.length();
        int i=0, j=0, match=0;
        while (i<n&&j<m) {
            if (s[i]==t[j]){
                j++;
                i++;
                match++;
            }
            else {
                j++;
            }
        }
        return match==n;
    }
};