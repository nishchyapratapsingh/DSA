class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> t(n+1, vector<vector<int>>(2, vector<int>(3, 0)));
        for (int i = n-1; i>=0; i--) {
            for (int buy = 0; buy < 2; buy++) {
                for (int k = 1; k < 3; k++) {
                    if (buy) {
                        t[i][buy][k] = max(-prices[i] + t[i+1][0][k], t[i+1][1][k]);
                    }
                    else {
                        t[i][buy][k] = max(prices[i]+t[i+1][1][k-1], t[i+1][0][k]);
                    }
                }
            }
        }
        return t[0][1][2];
    }
};

//Space optimised
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> curr(2, vector<int>(3, 0));
        vector<vector<int>> next(2, vector<int>(3, 0));
        for (int i = n-1; i>=0; i--) {
            for (int k = 1; k < 3; k++) {
                curr[1][k] = max(-prices[i] + next[0][k], next[1][k]);
                curr[0][k] = max(prices[i]+next[1][k-1], next[0][k]);
            }
            next = curr;
        }
        return curr[1][2];
    }
};