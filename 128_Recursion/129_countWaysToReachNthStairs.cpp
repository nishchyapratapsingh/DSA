//Using recursion
//Better approach is to use DP

#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {
    //  Write your code here.
    if (nStairs < 0) {
        return 0;
    }

    if (nStairs == 0) {
        return 1;
    }

    int nWays = countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);

    return nWays;
}