#include <iostream>
using namespace std;

void stringReverse(string &s, int i, int j)
{
    if (i >= j)
    {
        return;
    }

    swap(s[i], s[j]);

    stringReverse(s, i + 1, j - 1);
}

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    stringReverse(s, 0, n-1);

    cout << s;

    return 0;
}