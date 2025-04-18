//Sorting of Array (SELECTION SORT)
#include<iostream>
using namespace std;
void sortArray(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n; int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortArray(arr,n);
    return 0;
}