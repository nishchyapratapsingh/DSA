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
