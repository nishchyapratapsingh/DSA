class Solution
{
public:
    int countPartitions(vector<int> &arr, int d)
    {
        // Code here
        int n = arr.size();
        int totalSum = 0;
        for (int i : arr)
        {
            totalSum += i;
        }
        if ((totalSum + d) % 2 != 0 || totalSum < d)
            return 0;
        int target = (totalSum + d) / 2;
        vector<vector<int>> dp(n + 1, vector<int>(target + 1));

        for (int i = 0; i <= n; ++i)
        {
            dp[i][0] = 1;
        }

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 0; j <= target; ++j)
            {
                if (arr[i - 1] > j)
                {
                    dp[i][j] = dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j - arr[i - 1]] + dp[i - 1][j];
                }
            }
        }
        return dp[n][target];
    }
};