#include <bits/stdc++.h> 

bool isPalindrome(string word) {
	int left = 0;
	int right = word.length() - 1;

	while (left < right) {
		if (word[left++] != word[right--]) {
			return false;
		}
	}

	return true;
}


int countNumberOfPalindromeWords(string s)
{
	//Your code goes here
	int count = 0;
	stringstream ss(s);
	string word;

	if (s.empty()) return 0;

	while (ss >> word) { 
		for (int i=0 ; i<word.length(); i++) {
			if (word[i] >= 'A' && word[i] <= 'Z') {
				word[i] = tolower(word[i]);
			}
		}
		if (isPalindrome(word)) count++;
	}

	return count;
}

