#include <bits/stdc++.h> 

string rotateStr(string s) {
	char first = s[0];
	s.erase(0,1);
	s.push_back(first);
	return s;
}

int minimumRotations(int n, string s)
{
	// Write your code here
	string rotated = s;
	int count = 0;
	for (int i=0; i<n; i++) {
		rotated=rotateStr(rotated);
		count++;
		if (rotated == s) {
			return count;
		}
	}

	return n;

}