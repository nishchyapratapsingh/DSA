// Find nth fibonacci number using recursion
#include <iostream>
using namespace std;

int nthFibonacci(int n)
{

    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }
    
    int res = nthFibonacci(n - 1) + nthFibonacci(n - 2);

    return res;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << nthFibonacci(n) << endl;

    return 0;
}