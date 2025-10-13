//Memoisation + Binary Search
class Solution {
    int solve(int n, int k, vector<vector<int>> &memo) {
        if (n==1 || k<=1) {
            return k;
        }
        if (memo[n][k]!=-1) return memo[n][k];
        int ans = INT_MAX;
        
        int low = 1, high = k;
        
        while (low <= high) {
            int mid = low + (high-low)/2;
            
            int left = solve(n-1, mid - 1, memo);
            int right = solve(n, k-mid, memo);
            int temp = 1+max(left, right);
            
            if (left<right) {
                low = mid+1;
            }
            else high = mid-1;
            ans = min(ans , temp);
        }
        return memo[n][k] = ans;
    }
  public:

    // Function to find minimum number of attempts needed in
    // order to find the critical floor.
    int eggDrop(int n, int k) {
        // code here
        vector<vector<int>> memo(n+1, vector<int>(k+1, -1));
        return solve(n, k, memo);
    }
};