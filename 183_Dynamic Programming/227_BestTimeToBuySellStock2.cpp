//Can buy and sell any number of times

//Recursion + memoization
class Solution {
    int solve(vector<int>& prices, int idx, bool buy, vector<vector<int>> &t) {
        if (idx == prices.size()) {
            return 0;
        }
        if (t[idx][buy] != -1) {
            return t[idx][buy];
        }
        if (buy) {
            return t[idx][buy] = max(-prices[idx] + solve(prices, idx+1, 0, t), solve(prices, idx+1, 1, t));
        }
        else {
            return t[idx][buy] = max(prices[idx] + solve(prices, idx+1, 1, t), solve(prices, idx+1, 0, t));
        }
    }
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> t(n, vector<int>(2, -1));
        return solve(prices, 0, 1, t);
    }
};

//Bottom up
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> t(n+1, vector<int>(2, 0));
        for (int i = n-1; i >= 0; i--) {
            for (int buy = 0; buy < 2; buy++) {
                if (buy) {
                    t[i][buy] = max(-prices[i] + t[i+1][0], t[i+1][1]);
                }
                else {
                    t[i][buy] = max(prices[i] + t[i+1][1], t[i+1][0]);
                }
            }
        }
        return t[0][1];
    }
};

//Further space optimistion to O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> next(2);
        vector<int> curr(2);
        for (int i = n-1; i >= 0; i--) {
            curr[1] = max(-prices[i] + next[0], next[1]);
            curr[0] = max(prices[i] + next[1], next[0]);
            next = curr;
        }
        return curr[1];
    }
};