//Decimal to binary
#include<iostream>
using namespace std;
int dectobi(int decimal){
    int var=0;
    int x=1;
    while(decimal>0){
        var+=(x*(decimal%2));
        decimal/=2;
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