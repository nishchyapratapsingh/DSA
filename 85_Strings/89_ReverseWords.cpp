/* I/P- Sky is Blue O/P- Blue is Sky*/

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end()); //eulB si ykS

        int n = s.size();
        int m = 0;
        while (m<n) {

            int i = m;
            while(s[i] == ' ') {
                i++;
            }

            while (s[m]!=' ' && m<n) {
                m++;
            }
            
            reverse(s.begin() + i, s.begin() + m);
            m++;

        }

        return s;
    }
};