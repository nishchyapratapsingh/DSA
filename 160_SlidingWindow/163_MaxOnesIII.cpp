class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int l=0, r=0, count=0, n=arr.size(), maxi=INT_MIN;
        while (r<n) {
            if (arr[r]==0) count++;
            while (count>k) {
                if (arr[l]==0) count--;
                l++;
            }
            maxi=max(maxi, r-l+1);
            r++;
        }
        return maxi;
    }
};
