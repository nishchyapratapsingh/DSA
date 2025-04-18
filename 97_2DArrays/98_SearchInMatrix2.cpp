//my approach
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        for (int i=0; i<m; i++) {
            int start = 0;
            int end = n-1;
            int mid = start + (end-start)/2;

            while (start <= end) {
                int element = matrix[i][mid];

                if (element == target) {
                    return true;
                }

                else if (element < target) {
                    start = mid + 1;
                }

                else end = mid - 1;

                mid = start + (end-start)/2;
            }
        }

        return false;
    }
};

//better approach

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
     

        //this is actually so simple :(
        //swap i,j with j,i to get transpose and then reverse the rows voila
        int n = matrix.size();
    

        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (int i=0; i<n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }

    }
};