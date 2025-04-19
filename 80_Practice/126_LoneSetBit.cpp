/*You are given a single non-negative integer ‘N’ who’s binary representation consists of a single ‘1’ digit and the rest of the digits are ‘0’s. Your task is to find the position of the only ‘1’ digit. In other words, your task is to find the position of the only set bit in the binary representation of the input integer ‘N’.

The position of the set bit must be counted from the LSB (Least Significant Bit) end of the Binary number. If the count of set bits in the Binary number is not equal to 1, then your function should return ‘-1’ as output.*/

#include <bits/stdc++.h>

string toBinary(int N)
{
    string binary;
    while (N > 0)
    {
        binary.push_back(N % 2 + '0');
        N /= 2;
    }

    reverse(binary.begin(), binary.end());

    return binary;
}

int findSetBit(int N)
{
    // Write your code here
    if (N == 0)
        return -1;
    int position, count = 0;
    string binary = toBinary(N);

    for (int i = binary.length() - 1; i >= 0; i--)
    {

        if (binary[i] == '1')
        {
            count++;
            position = binary.length() - i;
        }
    }

    if (count == 1)
        return position;
    return -1;
}
