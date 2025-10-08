// User function Template for C++

class Solution {
    bool isPalindrome(string &s, int i, int j) {
        while (i<j) {
            if (s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }

  public:
    int palPartition(string &s) {
        // code here
        int n=s.length();
        vector<vector<int>> dp(n, vector<int> (n, 0));
        for (int len = 2; len <= n; len++) { 
            for (int i = 0; i <= n - len; i++) {
                int j = i + len - 1;
                if (isPalindrome(s, i, j)) {
                    dp[i][j] = 0;
                } else {
                    dp[i][j] = INT_MAX;
                    for (int k = i; k < j; k++) {
                        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + 1);
                    }
                }
            }
        }
        return dp[0][n-1];
    }
};