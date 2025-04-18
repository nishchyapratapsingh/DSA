class Solution {
public:
    bool check(vector<int>& nums) {

        int count = 0;
        int n = nums.size();



        for (int i=1; i<n; i++) {
            if (nums[i-1] > nums[i]) {  //compare all successive elements
                count++;
            }
        } 

        if (nums[0] < nums[n-1]) {  //compare last and first element
            count++;
        }

        return count<=1;  //<= handles the case when all elements are same
        
    }
};