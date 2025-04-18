//Binary Search to reduce time complexity
#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int m=(e+s)/2; //index of mid
        if(key==arr[m]){
            return m;
        }
        else if(key>arr[m]){
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    return -1;
}
int main(){
    int n,key; cin>>n; int arr[n]; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Key\n";
    cin>>key;
    cout<<binary_search(arr,n,key);
    return 0;
}