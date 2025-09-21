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