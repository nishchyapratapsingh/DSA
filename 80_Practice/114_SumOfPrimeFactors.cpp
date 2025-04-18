#include <bits/stdc++.h> 
int sumofprimefactors(int N)
{
    // Write your code here.
    int ans = 0;

    for (int i=2; i<=sqrt(N); i++) {

        while (N % i==0) {
            steps += i;
            N /= i;
        }
    }

    if (N>1) steps += N;
    return ans;
}
