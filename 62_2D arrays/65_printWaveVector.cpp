//Print like sine wave using vectors
#include<iostream>
#include<vector>
using namespace std;
vector<int> printAsWave(vector<vector<int>> &arr, int nrow,int ncol){
    vector<int> ans;
    for(int j=0;j<ncol;j++){
        if(j&1){ //when j is odd (bitwise & operator)
            for(int i=nrow-1;i>=0;i--){
                ans.push_back(arr[i][j]);
            }
        }
        else{
            for(int i=0;i<nrow;i++){
                ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;
}
int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<int>> arr(r,vector<int> (c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int val: printAsWave(arr,r,c)){ //for val in ans
        cout<<val<<" ";
    }
    return 0;
}