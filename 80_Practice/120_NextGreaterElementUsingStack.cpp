#include <bits/stdc++.h> 
vector<int> nextGreaterElement(vector<int>& arr, int n){
    // Write your code here.
    //trying stack

    vector<int> result(n,-1);
    stack <int> s;

    for (int i=n-1; i>=0; --i) {
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }

        if (!s.empty()) {
            result[i] = s.top();
        }

        s.push(arr[i]);
    }

    return result;
}