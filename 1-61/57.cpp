//Longest arithematic subarray
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=2;
    int pd=arr[1]-arr[0]; //previous difference
    int curr=2; //current length
    for(int j=2;j<n;j++){
        if(pd==arr[j]-arr[j-1]){
            curr++; //increase length count
        }
        else{
            pd=arr[j]-arr[j-1];  //update pd
            curr=2;  //reset length count
        }
        ans=max(ans,curr);
    }
    cout<<ans;
    return 0;
}