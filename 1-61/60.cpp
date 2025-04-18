//Subarray with given sum
#include <bits/stdc++.h>
using namespace std;
void subarraywithgivensum(int arr[], int n, int sum){
    int st=0, e=0;
    int s=0;
    while (e<=n){
        if(s==sum){
            cout<<st<<" "<<e-1<<endl;
            return;
        }
        else if(s<sum){
            if (e < n) {
                s += arr[e];
                e++;
            } 
            else {
                break;
            }
        }
        else{
            s-=arr[st];
            st++;
        }
    }
    cout<<"No such subarray found!";
}
int main(){
    int n; cin>>n; int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>> sum;
    subarraywithgivensum(arr,n,sum);
    return 0;
}