string findLCS(int n, int m,string &s1, string &s2){
	// Write your code here.
	string res;
	vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
	for (int i=1; i<=n; i++) {
		for (int j=1;j<=m; j++) {
			if (s1[i-1]==s2[j-1]) {
				dp[i][j] = dp[i-1][j-1]+1;
			}
			else {
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}	
	int i = n, j = m;
    while (i > 0 && j > 0) {
        if (s1[i-1] == s2[j-1]) {
            res.push_back(s1[i-1]);
            i--; j--;
        } else if (dp[i-1][j] > dp[i][j-1]) {
            i--;
        } else {
            j--;
        }
    }

    reverse(res.begin(), res.end());
    return res;
}