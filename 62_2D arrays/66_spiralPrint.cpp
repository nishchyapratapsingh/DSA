/* We don't have to use t at all, -> while(firstrow<=lastrow && firstcol<=lastcol)  and remove t*/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        //code
        if (matrix.empty() || matrix[0].empty()) return {}; 

        int r = matrix.size();
        int c = matrix[0].size();
        int t = r*c;

        int firstrow = 0;
        int firstcol = 0;
        int lastrow = r-1;
        int lastcol = c-1;

        vector<int> result;

        //logic

        while (t>0) {
            //firstrow
            for (int j=firstcol; j<=lastcol&&t>0; j++) {
                result.push_back(matrix[firstrow][j]);
                t--;
            }
            firstrow++;

            //lastcol
            for (int i=firstrow; i<=lastrow&&t>0; i++) {
                result.push_back(matrix[i][lastcol]);
                t--;
            }
            lastcol--;

            //lastrow
            for (int j=lastcol; j>=firstcol&&t>0; j--) {
                result.push_back(matrix[lastrow][j]);
                t--;
            }
            lastrow--;

            //firstcol
            for (int i=lastrow; i>=firstrow&&t>0; i--) {
                result.push_back(matrix[i][firstcol]);
                t--;
            }
            firstcol++;

        }

        return result;
    }
};