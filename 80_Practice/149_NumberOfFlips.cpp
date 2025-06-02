#include <bits/stdc++.h>

pair<string, string> toBinary(int a, int b)
{
    pair<string, string> result;
    while (a)
    {
        result.first.push_back('0' + a % 2);
        a /= 2;
    }

    while (b)
    {
        result.second.push_back('0' + b % 2);
        b /= 2;
    }

    while (result.first.length() > result.second.length())
    {
        result.second.push_back('0');
    }

    while (result.first.length() < result.second.length())
    {
        result.first.push_back('0');
    }

    reverse(result.first.begin(), result.first.end());
    reverse(result.second.begin(), result.second.end());

    return result;
}

int numberOfFlips(int a, int b)
{
    // Write your code here.
    pair<string, string> result = toBinary(a, b);

    int flip = 0;
    for (int i = 0; i < result.first.length(); i++)
    {
        if (result.first[i] != result.second[i])
        {
            flip++;
        }
    }

    return flip;
}