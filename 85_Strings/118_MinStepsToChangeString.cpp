//CODECHEF contest question
//min steps to convert given string into advitya
//in one step one letter can be incremented by one and alphabets are considered cyclic i.e. z+1 = a
#include <bits/stdc++.h>
using namespace std;

int min_steps(const string &s) {
    string og = "ADVITIYA";
    int stepcount = 0;
    for (int i=0; i<s.length(); i++) {
        if (s[i] != og[i]) {
            stepcount += ((og[i] - 'A') - (s[i] - 'A') + 26) % 26;
        }
    }
    
    return stepcount;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--) {
	    string s;
	    cin >> s;
	    cout<<min_steps(s)<<endl;
	}
}
