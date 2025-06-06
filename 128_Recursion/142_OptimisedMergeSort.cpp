//Here we create temp vector only once in the sortArray function and then call it by reference in other functions
//Use insertion sort for smaller subarrays (<16 size)
//Skip merge if already sorted: 
//if (nums[m]>nums[m+1]) {
//     merge(nums, s, m ,e, temp);
// }

class Solution {
    public:
    
        void insertionSort(vector<int>& nums, int s, int e) {
            for (int i = s + 1; i <= e; ++i) {
                int key = nums[i];
                int j = i - 1;
    
                while (j >= s && nums[j] > key) {
                    nums[j + 1] = nums[j];
                    --j;
                }
                nums[j + 1] = key;
            }
        }
    
    
        void merge(vector<int>& nums, int s, int m, int e, vector<int>& temp) {
            int left = s;
            int tempIdx = s;
            int right = m+1;
            while (left<=m && right <=e) {
                if (nums[left]<nums[right]) {
                    temp[tempIdx++]=nums[left++];
                }
                else {
                    temp[tempIdx++]=nums[right++];
                }
            }
    
            while (left<=m) {
                temp[tempIdx++]=(nums[left++]);
            }
    
            while (right<=e) {
                temp[tempIdx++]=(nums[right++]);
            }
    
            for (int i=s; i<=e; i++) {
                nums[i] = temp[i];
            }
        }
    
        void mergeSort(vector<int>& nums, int s, int e, vector<int>& temp) {
            if (e - s <= 16) { 
                insertionSort(nums, s, e);
                return;
            }
            int m=s+(e-s)/2;
            mergeSort(nums, s, m, temp);
            mergeSort(nums, m+1, e, temp);
    
            if (nums[m]>nums[m+1]) {
            merge(nums, s, m ,e, temp);
            }
        }
    
        vector<int> sortArray(vector<int>& nums) {
            vector<int> temp(nums.size(), 0);
            mergeSort(nums, 0, nums.size()-1, temp);
    
            return nums;
        }
};