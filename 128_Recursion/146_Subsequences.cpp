#include <bits/stdc++.h>

void solve(string &str, string current, vector<string> &result, int index)
{
    // base case
    if (index >= str.length())
    {
        result.push_back(current);
        return;
    }

    // exclude case
    solve(str, current, result, index + 1);

    // include case
    char elem = str[index];
    current.push_back(elem);
    solve(str, current, result, index + 1);
}

vector<string> subsequences(string str)
{
    vector<string> result;
    int index = 0;
    string current;
    solve(str, current, result, index);
    result.erase(remove(result.begin(), result.end(), ""), result.end());

    return result;
}
