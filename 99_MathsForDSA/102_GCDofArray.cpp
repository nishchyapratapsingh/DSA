//Eucledian algorithm
class Solution {

private:

    int euclideangcd(int a, int b) {
        if (a==0) return b;
        if (b==0) return a;

        while (a != b) {
            if (b > a) b = b-a;
            else a = a - b;
        }

        return a;
    }

public:
    int findGCD(vector<int>& nums) {

    int minElement = *min_element(nums.begin(), nums.end()); 
    int maxElement = *max_element(nums.begin(), nums.end()); 
    return euclideangcd(minElement, maxElement);
        
    }
};


//normal approach
#include<algorithm>
class Solution {
public:
    int findGCD(vector<int>& nums) {

    int n= nums.size();
    int minElement = *min_element(nums.begin(), nums.end()); 
    int maxElement = *max_element(nums.begin(), nums.end()); 
    int gcd;   
    
    for (int i=1; i<=minElement; i++) {
        int flag = 1;
        if (minElement % i != 0 || maxElement % i != 0) {
            flag = 0;
        }
        if (flag==1) gcd = i;
    }

    return gcd;
    }
};