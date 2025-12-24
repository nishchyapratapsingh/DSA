class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int digitSum = 0;
        int elemSum = 0;
        for (int i = 0; i < n; i++) {
            int curr = nums[i];
            elemSum += curr;
            while (curr) {
                digitSum += curr%10;
                curr /= 10;
            }
        }
        return abs(digitSum - elemSum);
    }
};