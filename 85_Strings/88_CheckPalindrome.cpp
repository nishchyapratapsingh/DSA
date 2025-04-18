//My solution

#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
    // Write your code here.
    int n = s.size();

    for (int i=0; i<n; i++) {

        //Uppercase to lowercase
        if (s[i] >= 65 && s[i] <= 90) {  //we don't need ascii values, we can compare with 'a' and 'z'
            s[i] = tolower(s[i]); 
        }
    }
    
    string tocheck;
    for (int i=0; i<n; i++) {

        //store valid characters in a new string
        if ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 49 && s[i] <= 57)) {
            tocheck.push_back(s[i]);
        }
    }

    int i=0;
    int j = tocheck.size() - 1;

    //check palindrome
    while (j>i) {
        if (tocheck[i++] != tocheck[j--]) {
            return false;
        }
    }

    return true;
}