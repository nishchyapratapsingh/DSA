 
 //efficient nd simple
 // string addstr(string num1, string num2) {
    //     int carry = 0, sum = 0;
    //     string result = "";

    //     int i = num1.size() - 1, j = num2.size() - 1;
    //     while (i >= 0 || j >= 0 || carry) {
    //         int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
    //         int digit2 = (j >= 0) ? num2[j--] - '0' : 0;

    //         sum = digit1 + digit2 + carry;
    //         result.push_back((sum % 10) + '0');
    //         carry = sum / 10;
    //     }

    //     reverse(result.begin(), result.end());
    //     return result;
    // }


#include <bits/stdc++.h>
using namespace std;

vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    // Initialize variables
    int num1 = 0, num2 = 0;

    // Convert arrays to integers
    for (int i = 0; i < n; i++) {
        num1 = num1 * 10 + a[i];
    }
    for (int i = 0; i < m; i++) {
        num2 = num2 * 10 + b[i];
    }

    // Calculate sum
    int ans = num1 + num2;

    // Extract digits of the result into a vector
    vector<int> result;
    if (ans == 0) {
        result.push_back(0);
    } else {
        while (ans > 0) {
            result.push_back(ans % 10);
            ans /= 10;
        }
        // Reverse the vector to maintain the correct order
        reverse(result.begin(), result.end());
    }

    return result;
}


