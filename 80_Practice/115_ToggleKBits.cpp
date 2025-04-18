//You are given a 32-bit integer ‘N’. Your task is to toggle the rightmost ‘K’ bits in the given integer and return the new integer.

#include <bits/stdc++.h> 

int toggleKBits(int n, int k) {
    // Write your code here.
    int mask = (1<<k) - 1;
    int result = n^mask;
    return result;
}