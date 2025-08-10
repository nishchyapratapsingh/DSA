// Recursion Brute force
class Solution
{
public:
    int helper(int W, vector<int> &val, vector<int> &wt, int i)
    {
        if (i < 0)
        {
            return 0;
        }
        if (W < wt[i])
        {
            return helper(W, val, wt, i - 1);
        }
        return max(helper(W - wt[i], val, wt, i - 1) + val[i], helper(W, val, wt, i - 1));
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt)
    {
        // code here
        return helper(W, val, wt, val.size() - 1);
    }
};

// Memoization
class Solution
{
public:
    int helper(int W, vector<int> &val, vector<int> &wt, vector<vector<int>> &memo, int i)
    {
        if (i < 0 || W = 0)
        {
            return 0;
        }
        if (W < wt[i])
        {
            memo[i][W] = helper(W, val, wt, memo, i - 1);
            return memo[i][W];
        }
        if (memo[i][W] >= 0)
            return memo[i][W];
        int res = max(helper(W - wt[i], val, wt, memo, i - 1) + val[i], helper(W, val, wt, memo, i - 1));
        memo[i][W] = res;
        return res;
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt)
    {
        // code here
        vector<vector<int>> memo(val.size(), vector<int>(W + 1, -1));
        return helper(W, val, wt, memo, val.size() - 1);
    }
};

// Bottom Up
class Solution
{
public:
    int knapsack(int W, vector<int> &val, vector<int> &wt)
    {
        int n = val.size();
        vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 0; j <= W; ++j)
            {
                if (wt[i - 1] <= j)
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - wt[i - 1]] + val[i - 1]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        return dp[n][W];
    }
};