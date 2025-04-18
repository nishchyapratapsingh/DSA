class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        int s = 0;
        int e = r*c - 1;
        int m = s + (e-s)/2;

        while (s<=e) {
            
            int rowi = m/c;
            int coli = m%c;

            if (matrix[rowi][coli] == target) {
                return true;
            }

            else if (matrix[rowi][coli] < target) {
                s = m+1;
            }

            else if (matrix[rowi][coli] > target) {
                e = m-1;
            }

            m = s + (e-s)/2;
        }

        return false;
    }
};