//Check whether an alphabet is vowel or consonant
#include<iostream>
using namespace std;
int main(){
    char c;
    bool isVowel; //0 or 1
    cin >> c;
    isVowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'); //isVowel becomes 1 if any expression is true

    if (isVowel){  //if isVowel==1
        cout<<"Vowel\n";
    }
    else{
        cout<<"Consonant";
    }
    return 0;
}