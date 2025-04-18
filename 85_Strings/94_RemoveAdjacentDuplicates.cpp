class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.length();

        for (int i = 0; i < n - 1; ) {  // Use `i < n - 1` to avoid out-of-bounds for `s[i+1]`
            if (s[i] == s[i+1]) {
                s.erase(i, 2);  // Remove adjacent duplicates
                n -= 2;         // Update the size of the string
                if (i > 0) i--; // Move back to check the previous index
            } else {
                i++;            // Move forward only when no removal occurs
            }
        }

        return s;
    }
};
