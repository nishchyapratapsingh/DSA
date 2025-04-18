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
//approach 2 using another matrix
//Rotate a nxn matrix by 90 degrees
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix, int n){
    vector<vector<int>> rotatedmatrix(n,vector<int> (n));
    for(int i=0;i<n;i++){
        int m=0;
        for(int j=0;j<n;j++){
            rotatedmatrix[m][n-1-i]=matrix[i][j];
            m++;
        }
    }
    return rotatedmatrix;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> matrix(n,vector<int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    vector<vector<int>> result = rotateMatrix(matrix,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}