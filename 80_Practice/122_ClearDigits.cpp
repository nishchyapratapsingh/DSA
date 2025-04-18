//T.C. O(n)
//S.C. O(n) can be improved to O(1) check solution below this solution

class Solution {
    public:
        string clearDigits(string s) {
            string result;
            stack<int> intstack;
    
            for (int i=0; i<s.length(); i++) {
    
                intstack.push(s[i]);
    
                if (!empty(intstack) && intstack.top() >= '0' && intstack.top() <= '9') {
                    
                    intstack.pop();
                    if (!empty(intstack)) intstack.pop();
                }
    
            }
    
            while (!empty(intstack)) {
                result.push_back(intstack.top());
                intstack.pop();
            }
    
            reverse(result.begin(), result.end());
    
            return result;
    
        }
    
    };

    //TC O(n)
    //SC O(n)

    class Solution {
        public:
            string clearDigits(string s) {
                int j=0; 
        
                for (char c: s) {
                    if(isdigit(c)) {
                        if (j>0) j--;
                    }
        
                    else {
                        s[j++] = c;
                    }
                }
        
                return s.substr(0,j);
            }
    };