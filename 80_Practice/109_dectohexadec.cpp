#include <bits/stdc++.h>
using namespace std;

string toHex(int num) {
    if (num == 0) return "0"; // Handle 0 explicitly

    string result;
    unsigned int n = num; // Treat the number as an unsigned 32-bit integer

    // Convert to hexadecimal
    while (n) {
        int remainder = n % 16;
        if (remainder < 10) {
            result.push_back(remainder + '0');
        } else {
            result.push_back(remainder - 10 + 'A');
        }
        n /= 16;
    }

    reverse(result.begin(), result.end()); // Reverse to get the correct order
    return result;
}
