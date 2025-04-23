#include <iostream>
using namespace std;

long long result(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }

    long long ans = result(a, b / 2);

    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << result(a, b);
}