//Record breaking day problem
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr[n]=-1; //last element before null
    int ans=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>mx&&arr[i]>arr[i+1]){
            ans++;
        }
        mx=max(mx,arr[i]);
    }
    cout<<ans;
    return 0;
}