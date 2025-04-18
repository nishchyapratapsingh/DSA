#include<iostream>
using namespace std;

int getpivot(int arr[], int n){

    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;

    while(e>s){

        if(arr[m] >= arr[0]){
            s = m+1;
        }

        else
            e = m;

        m = s+(e-s)/2;
    }

    return s;

}

int main(){

    int arr[5] = {7,8,1,5,6};
    int n = 5;

    cout << getpivot(arr, n);

    return 0;
}