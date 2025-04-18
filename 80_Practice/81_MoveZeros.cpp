//naive approach using new conatiner
void pushZerosAtEnd(vector<int> &arr) 
{
	// Write your code here.
	int n = arr.size();
	vector<int> temp;

	for (int i = 0; i<n; i++) {
		if (arr[i]!=0) {
			temp.push_back(arr[i]);
		}
	}

	int m = temp.size();
	for (int i = m-1; i<n; i++) {
		temp.push_back(0);
	}

	for (int i=0; i<n; i++) {
		arr[i] = temp[i];
	}
}

//two pointer approach
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i=0;

        for (int j=0; j<n; j++) {
            if (nums[j] != 0) {
                swap(nums[j], nums[i]);
                i++;
            }
        }
        
    }
};