class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();

        int s = 0;
        int e = n-1;
        int m = s + (e - s) / 2;

         while(e>s){

        if(nums[m] >= nums[0]){
            s = m+1;
        }

        else
            e = m;

        m = s+(e-s)/2;
    }
    if(s==n-1 && nums[s]>nums[0]){
        return nums[0];
    }

    return nums[s];
    }
};