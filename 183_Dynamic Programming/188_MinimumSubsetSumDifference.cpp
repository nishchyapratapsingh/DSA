class Solution
{
    vector<bool> isSubsetSum(vector<int> &arr, int sum)
    {
        int n = arr.size();
        vector<bool> res;
        vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1));

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= sum; j++)
            {
                if (i == 0)
                {
                    dp[i][j] = false;
                }
                if (j == 0)
                {
                    dp[i][j] = true;
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= sum; j++)
            {
                if (arr[i - 1] > j)
                {
                    dp[i][j] = dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
                }
            }
        }
        for (int j = 0; j <= sum; j++)
        {
            res.push_back(dp[n][j]);
        }
        return res;
    }

public:
    int minDifference(vector<int> &arr)
    {
        // Your code goes here
        int sum = 0, n = arr.size();
        for (int i : arr)
            sum += i;
        vector<bool> subsetSum = isSubsetSum(arr, sum);
        int mn = INT_MAX;
        for (int i = 0; i <= sum / 2; i++)
        {
            if (subsetSum[i])
                mn = min(mn, sum - 2 * i);
        }
        return mn;
    }
};
