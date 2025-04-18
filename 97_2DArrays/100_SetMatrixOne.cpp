#include <bits/stdc++.h> 
void setMatrixOnes(vector<vector<int>> &MAT, int n, int m)
{
    // Write your code here.
    vector<int> row(n, 0);
    vector<int> col(m, 0);

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (MAT[i][j] == 1) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (row[i] == 1 || col[j] == 1) {
                MAT[i][j] = 1;
            }
        }
    }
}
