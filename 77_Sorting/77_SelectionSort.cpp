#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    int si = 0; //smallest index;
    for (int i=0; i<n-1; i++) {
        
        int si = i; //smallest index;

        for (int j=i+1; j<n; j++) {
            if (arr[j] < arr[si]) {
                si = j;
            }
        }

        swap(arr[i], arr[si]);
    }
    
}