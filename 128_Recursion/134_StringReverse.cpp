#include <iostream>
using namespace std;

void stringReverse(string &s, int n)
{
    if (n == 0)
        return;

    cout << s[n - 1];

    stringReverse(s, n - 1);
}

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    stringReverse(s, n);

    return 0;
}