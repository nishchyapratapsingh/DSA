//Recursive solution
class Solution {
    int solve(string& s, int i, int j, bool isTrue) {
        if(i>j) {
            return 0;
        }
        else if(i==j) {
            if (isTrue) {
                return s[i] == 'T';
            }
            else return s[i] == 'F';
        }
        int ans=0;
        for (int k=i+1; k<j; k+=2) {
            int lt = solve(s, i, k-1, true);
            int lf = solve(s, i, k-1, false);
            int rt = solve(s, k+1, j, true);
            int rf = solve(s, k+1, j, false);
            if (s[k]=='&') {
                if (isTrue) ans += lt*rt;
                else ans += lf*rf + lt*rf + lf*rt;
            }
            else if (s[k]=='|') {
                if (isTrue) ans += lt*rt + lt*rf + lf*rt; 
                else ans += rf*lf;
            }
            else {
                if (isTrue) ans += lt*rf + lf*rt;
                else ans += lt*rt + lf*rf;
            }
        }
        return ans;
    }
  public:
    int countWays(string &s) {
        // code here
        int n=s.length();
        return solve(s, 0, n-1, true);
    }
};

//memoisation
// User function Template for C++
class Solution {
    int solve(string& s, int i, int j, bool isTrue, vector<vector<vector<int>>> &dp) {
        if(i>j) {
            return 0;
        }
        else if(i==j) {
            if (isTrue) {
                return s[i] == 'T';
            }
            else return s[i] == 'F';
        }
        if (dp[i][j][isTrue] != -1) {
            return dp[i][j][isTrue];
        }
        int ans=0;
        for (int k=i+1; k<j; k+=2) {
            int lt = solve(s, i, k-1, true, dp);
            int lf = solve(s, i, k-1, false, dp);
            int rt = solve(s, k+1, j, true, dp);
            int rf = solve(s, k+1, j, false, dp);
            if (s[k]=='&') {
                if (isTrue) ans += lt*rt;
                else ans += lf*rf + lt*rf + lf*rt;
            }
            else if (s[k]=='|') {
                if (isTrue) ans += lt*rt + lt*rf + lf*rt; 
                else ans += rf*lf;
            }
            else {
                if (isTrue) ans += lt*rf + lf*rt;
                else ans += lt*rt + lf*rf;
            }
        }
        return dp[i][j][isTrue] = ans;
    }
    
  public:
    int countWays(string &s) {
        // code here
        int n=s.length();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(2, -1)));
        return solve(s, 0, n-1, true, dp);
    }
};