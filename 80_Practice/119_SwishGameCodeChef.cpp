#include <bits/stdc++.h>
using namespace std;

int num_rings(const string &s, int m, int k) {
    int swishcount = 0;
    for (int i=0; i<m; i++) {
        if (s[i] == 'S') swishcount++;
    }
    
    if (swishcount>=k) {
        return m;
    }
    
    else if (swishcount < k) {
        return (k-swishcount-1)+m;
    }
    return 0;
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int m;
	    int k;
	    string s;
	    cin>>m>>k;
	    cin>>s;
	    cout<<num_rings(s,m,k)<<endl;
	}
	return 0;

}
