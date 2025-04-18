class Solution {
public:
    void sortColors(vector<int>& nums) {
        //we use the dutch national flag algorithm
        int n = nums.size();
        int low=0, mid=0, high=n-1;  //three pointers

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }

            else if (nums[mid] == 1) {
                mid++;
            }

            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
        
        
    }
};