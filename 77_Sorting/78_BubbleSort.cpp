#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here
    for(int i=0;i<n;i++){
        for (int j = 0; j<n-1 ;j++) {
          if (arr[j] > arr[j + 1]) {
            swap(arr[i], arr[i + 1]);
          }
        }
    }
}
