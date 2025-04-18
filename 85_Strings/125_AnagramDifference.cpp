#include <bits/stdc++.h> 
int getMinimumAnagramDifference(string &str1, string &str2) {
    // Write your code here.
    vector<int> alphaCount1(26, 0);
    vector<int> alphaCount2(26, 0);

    for (auto i:str1) {
        alphaCount1[i-'a']++;
    }

    for (auto i:str2) {
        alphaCount2[i-'a']++;
    }

    int count=0;

    for (int i=0; i<26; i++) {
        count+=abs(alphaCount1[i]-alphaCount2[i]);
    }

    return count/2;
}