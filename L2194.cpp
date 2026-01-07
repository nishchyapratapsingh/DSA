class Solution {
public:
   vector<string> cellsInRange(string s) {
       int sr = s[1]-'0';
       int er = s[4]-'0';
       int sc = s[0]-'A';
       int ec = s[3]-'A';
       vector<string> res;
       for (int i = sc; i<= ec; i++) {
           for (int j = sr; j <= er; j++) {
               string curr;
               curr += i+'A';
               curr += j+'0';
               res.push_back(curr);
           }
       }
       return res;
   }
};
