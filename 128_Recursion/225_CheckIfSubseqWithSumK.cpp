class Solution {
  public:
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        // Code here
        if (k == 0) {
            return true;
        }
        if (k < 0 || n < 0) {
            return false;
        }
        return checkSubsequenceSum(n-1, arr, k-arr[n-1]) || checkSubsequenceSum(n-1, arr, k);
    }
};