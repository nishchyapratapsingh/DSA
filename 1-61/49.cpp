//Search for key in an array
#include<iostream>
using namespace std;
int main(){
    int n,arr[n],key,index; cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter key to search\n";
    cin>>key;
    for(int i=0;i<n;i++){
        if (key==arr[i]){
            index=i;
            break;
        }
        else{
            index=-1;
        }
    }
    cout<<index;
    return 0;
}