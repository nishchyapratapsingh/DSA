//Eucledian algorithm
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int euclideangcd(int a, int b) {
    if (a==0) return b;
    if (b==0) return a;

    while (a != b) {
        if (b > a) b = b-a;
        else a = a - b;
    }

    return a;
}

int euclideanlcm(int a, int b) {
    int gcd = euclideangcd(a, b);

    return (a*b/gcd);
}

int findLCM(vector<int>& nums) {

    if (nums.size()==0) return -1;

    int minElement = *min_element(nums.begin(), nums.end()); 
    int maxElement = *max_element(nums.begin(), nums.end()); 

    return euclideanlcm(minElement, maxElement);
        
}

int main() {
    int n; cin>>n;
    vector<int> nums(n);

    for (int i=0; i<n; i++) {
        cin>>nums[i];
    }

    cout<<findLCM(nums);
    
}
