#include <iostream>
using namespace std;

void checkPalindrome(const string &s, int i, int j)
{
    if (i >= j)
    {
        cout << "Palindrome";
        return;
    }

    if (s[i] != s[j])
    {
        cout << "Not a palindrome!";
        return;
    }

    checkPalindrome(s, i + 1, j - 1);
}

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    checkPalindrome(s, 0, n - 1);

    return 0;
}