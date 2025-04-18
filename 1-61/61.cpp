//Smallest Positive Missing Number
#include<iostream>
using namespace std;
int main(){
    int n; cin>>n; int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    const int N=1e6+2;
    bool* check= new bool[N];
    for(int i=0;i<N;i++){
        check[i]=0; //initialising
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            check[arr[i]]=1;
        }
    }
    int ans=-1;
    for(int i=1;i<N;i++){
        if(check[i]==0){
            ans=i;
            break;
        }
    }
    cout<<ans;
    delete[] check;
    return 0;
}