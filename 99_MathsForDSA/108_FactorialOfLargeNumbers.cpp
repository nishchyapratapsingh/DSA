//I wrote this :-: cries

#include <bits/stdc++.h> 
#include <string>
using namespace std;



string strmul(string str1, int m) {
    int carry = 0;
    string result;

    reverse(str1.begin(), str1.end());

    for (char c : str1) {
        int mul = (c - '0') * m + carry;
        result.push_back((mul % 10) + '0');
        carry = mul / 10;
    }

    while (carry) {
        result.push_back((carry % 10) + '0');
        carry /= 10;
    }

    reverse(result.begin(), result.end());
    return result;
}


/* //my strmul nd stradd

    // string strmul(string str1, int m) {
    //     int carry = 0;
    //     string str2 = to_string(m);
        
    //     int l1 = str1.length();
    //     int l2 = str2.length();

    //     reverse(str1.begin(), str1.end());
    //     reverse(str2.begin(), str2.end());



    //     string result = "0";

    //     for (int j=0; j<l2; j++) {

    //         string fac;

    //       for (int k = 0; k < j; k++) {
    //         fac.push_back('0');
    //       }

    //       for (int i = 0; i < l1; i++) {

    //         int mul = (str1[i] - '0') * (str2[j] - '0') + carry;
    //         fac.push_back(mul % 10 + '0');
    //         carry = mul / 10;

    //       }
    //     while (carry) {
    //         int mul = carry;
    //         fac.push_back(mul%10 + '0');
    //         carry = mul/10;
    //     }

    //     reverse(fac.begin(), fac.end());


    //       result = addstr(result, fac);

    //     }

    //     return result;
    // }

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
 */


string calculateFactorial(int n)
{
    //    Write your code here.
    int m=n;
    string fac = "1";
    while (m>0) {
        fac = strmul (fac, m--);
    }

    return fac;
}