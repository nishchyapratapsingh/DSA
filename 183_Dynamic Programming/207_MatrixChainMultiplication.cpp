class Solution {
    int solve(vector<vector<int>> &dp, vector<int>&arr, int i, int j) {
        if (i>=j) return 0;
        if (dp[i][j]!=-1) return dp[i][j];
        int ans=INT_MAX;
        int temp;
        for (int k=i; k<j; k++) {
            temp=solve(dp, arr, i, k)+solve(dp, arr, k+1, j)+arr[i-1]*arr[k]*arr[j];
            ans = min(temp, ans);
        }
        dp[i][j]=ans;
        return dp[i][j];
    }
  public:
    int matrixMultiplication(vector<int> &arr) {
        // code here
        vector<vector<int>> dp(arr.size()+1, vector<int>(arr.size()+1, -1));
        return solve(dp, arr, 1, arr.size()-1);
    }
};


//Bottom Up
#include <bits/stdc++.h> 

int matrixMultiplication(vector<int> &arr, int n)
{
    // Write your code here.
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int len = 2; len < n; len++) {
        for (int i = 0; i < n - len; i++) {
            int j = i + len;
            dp[i][j] = INT_MAX;

            for (int k = i + 1; k < j; k++) {
                int cost = dp[i][k] + dp[k][j] + arr[i] * arr[k] * arr[j];
                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }
    return dp[0][n-1];
}