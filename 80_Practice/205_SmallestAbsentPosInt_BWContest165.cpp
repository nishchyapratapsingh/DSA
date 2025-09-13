class Solution {
    bool ptInNums(vector<int> &nums, int pt) {
        for (int num:nums) {
            if (num==pt) {
                return true;
            }
        }
        return false;
    }
public:
    int smallestAbsent(vector<int>& nums) {
        int totalSum=0;
        for (int num: nums) {
            totalSum+=num;
        }
        int n=nums.size();
        int avg = totalSum/n;
        int pt = (avg<=0)?1:avg+1;
        while (ptInNums(nums, pt)) {
            pt++;
        }
        return pt;
    }
};©leetcode