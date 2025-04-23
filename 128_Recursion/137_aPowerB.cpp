#include <iostream>
using namespace std;

long long result(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }

    return a * result(a, b - 1);
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << result(a, b);
}