class Solution {
public:
    void reverseString(vector<char>& s) {

        int i = 0;
        int j = s.size()- 1;
        while (j>i) {
            swap(s[i], s[j]);
            i++;
            j--;
        }   
    }
};

//vector arrays do not use null char to mark end