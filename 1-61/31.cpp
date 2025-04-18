//Reversing a decimal number
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num, digits=0; int temp;
    cin>>num; int var=num;
    while(var>0){
        var=var/10;
        digits++;
    }
    var=num;
    num=0;
    for(int i=digits;i>0;i--){
        
        temp=var%10;
        var=var/10;
        num+=temp*pow(10,i-1);
    }
    cout<<num;
    return 0;
}