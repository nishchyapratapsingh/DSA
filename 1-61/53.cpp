//Bubble sort (Repeatedly swap adjacent elements if they are in wrong order)
#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    int temp;
    for(int j=1;j<n;j++){
     for(int i=0;i<n-j;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    return 0;
}