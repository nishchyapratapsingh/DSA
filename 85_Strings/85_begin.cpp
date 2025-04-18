#include<iostream>
using namespace std;

int main() {

    char ch[10] = "abcdef"; //initialisation

    int i = 0;
    while (ch[i] != '\0') {  //printing
        cout<<ch[i];
        cout<<" ";
        i++;
    }
}

//null character at the end '\0' 