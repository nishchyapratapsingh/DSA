//Decimal to Octal
#include<iostream>
using namespace std;
int dectobi(int decimal){
    int var=0;
    int x=1;
    while(decimal>0){
        var+=(x*(decimal%8));
        decimal/=8;
        x*=10;
    }
    return var;
}
int main(){
    int decimal;
    cin>>decimal;
    cout<<dectobi(decimal)<<endl;
    return 0;
}