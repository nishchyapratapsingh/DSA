#include <bits/stdc++.h>

string addBinaryString(string &a, string &b, int n, int m)
{
    // Write your code here.
    int carry;
    string result;

    int i = n - 1;
    int j = n - 1;

    while (i >= 0 || j >= 0 || carry)
    {
        int bitA = i >= 0
                       ? a[i] - '0'
                       : 0;

        int bitB = j >= 0
                       ? b[j] - '0'
                       : 0;

        int sum = bitA + bitB + carry;

        result += sum % 2 + '0';
        carry = sum / 2;

        i--;
        j--;
    }

    reverse(result.begin(), result.end());

    return result;
}