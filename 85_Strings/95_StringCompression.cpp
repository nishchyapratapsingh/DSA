//My approach
#include <bits/stdc++.h> 
string compressTheString(string &s)
{
	// Write your code here
    int n = s.length();
    string compressed;

    for (int i=0; i<n;) {
        char currentchar = s[i];
        int count = 0;

        compressed.push_back(s[i]);

        while (i<n && s[i]==currentchar) {
            count++;
            i++;
        }

        if (count > 1) compressed += to_string(count); 


    }

    return compressed;
}

//More efficient approach

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;               // Pointer to traverse the input array
        int ansIndex = 0;        // Tracks position where compressed result is stored
        int n = chars.size();    // Total size of the input array
        
        // Loop until all characters in the array are processed
        while (i < n) {
            int j = i + 1;  // Start checking for the next character group
            
            // Find the length of the current group of consecutive characters
            while (j < n && chars[i] == chars[j]) {
                j++;  // Keep moving j while the characters are the same
            }
            
            
            // Store the character at the current group start in the result
            chars[ansIndex++] = chars[i];
            
            // Calculate the count of consecutive characters
            int count = j - i; // Length of the current group
             
            // If count > 1, add the count as a string to the result array
            if (count > 1) {
                string cnt = to_string(count); // Convert count to string
                for (char ch : cnt) {          // Add each character of the count
                    chars[ansIndex++] = ch;
                }
            }
            
            // Move to the next group of characters
            i = j;
        }
        
        // Return the new length of the compressed array
        return ansIndex;
    }
};
