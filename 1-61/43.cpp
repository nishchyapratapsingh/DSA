//Hexadecimal to decimal
#include<bits/stdc++.h>
using namespace std;
int hexatodeci(string str){
    int len=str.size();
    int var=0;
    int x=1;
    for(int i=len-1;i>=0;i--){
        if(str[i]>='0'&&str[i]<='9'){
            var+=(str[i]-'0')*x;  //on subtracting 0 the ASCII value of char changes into number
        }
        if(str[i]>='A'&&str[i]<='F'){
            var+=(str[i]-'A'+10)*x; //to convert the char into value
        }
        x*=16;
    }
    return var;
}
int main(){
    string str;
    cin>>str;
    cout<<hexatodeci(str)<<endl;
    return 0;
}