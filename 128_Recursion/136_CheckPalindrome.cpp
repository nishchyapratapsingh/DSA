#include <iostream>
using namespace std;

bool checkPalindrome(const string &s, int i, int j)
{
    if (i >= j)
    {
        return true;
    }

    if (s[i] != s[j])
    {
        return false;
    }

    return checkPalindrome(s, i + 1, j - 1);
}

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    if (checkPalindrome(s, 0, n - 1))
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a palindrome!" << endl;
    }

    return 0;
}