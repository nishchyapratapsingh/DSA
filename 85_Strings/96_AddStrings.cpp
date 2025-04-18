#include <bits/stdc++.h> 
string stringSum(string &num1, string &num2) {
    // Write your code here.
    int n1 = num1.size(); int n2 = num2.size();

    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
     
    string result = ""; int temp; int carry = 0;
    
    for (int i=0; i<n1 && i<n2; i++) {
        temp = (num1[i]-'0') + (num2[i] -'0') + carry;
        carry = temp/10;
        result.push_back(temp%10 + '0');
    }

    if (n1>n2) {
        for (int i=n2; i<n1; i++) {
            temp = (num1[i]-'0') + carry;
            carry = temp/10;
            result.push_back(temp%10 + '0');
        }
    }

    else if (n2>n1) {
        for (int i=n1; i<n2; i++) {
            temp = (num2[i]-'0') + carry;
            carry = temp/10;
            result.push_back(temp%10 + '0');
        }
    }

    if (carry) {
        result.push_back(carry + '0');
    }
    
    reverse(result.begin(), result.end());
    return result;
}