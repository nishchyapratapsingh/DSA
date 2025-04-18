class Solution {
public:
    string addBinary(string a, string b) {
        
        string result;
        int carry = 0;
        int sum; 

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        for (int i=0; i<a.size() && i<b.size(); i++) {
            sum = (a[i] - '0') + (b[i]-'0') + carry;
            result.push_back(sum%2+'0');
            carry = sum/2;
        }

        if (a.size() > b.size()) {
            for (int i=b.size(); i<a.size(); i++) {
                sum = (a[i] - '0') + carry;
                result.push_back(sum%2+'0');
                carry = sum/2;
            }
        }

        else if (b.size() > a.size()) {
            for (int i=a.size(); i<b.size(); i++) {
                sum = (b[i] - '0')  + carry;
                result.push_back(sum%2+'0');
                carry = sum/2;
            }
        }

        while (carry) {
            sum = carry;
            result.push_back(sum%2+'0');
            carry = sum/2;
        }

        reverse(result.begin(), result.end());

        return result;

    }
};