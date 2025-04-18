//First repeating element
//To decrease the time complexity we do not iterate on the array twice
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    const int N=1e6+2; //unchangeable value of N of order 10^6
    int* ARR = new int[N]; //to allocate memory
    for(int i=0;i<N;i++){
        ARR[i]=-1;
    }
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        if(ARR[arr[i]]!=-1){
            mini=min(mini,ARR[arr[i]]);
        }
        else{
            ARR[arr[i]]=i;
        }
    }
    if (mini==INT_MAX){
        cout<<-1;
    }
    else{
        cout<<mini+1;
        
    }
    delete[] ARR; //deallocate
    return 0;
}