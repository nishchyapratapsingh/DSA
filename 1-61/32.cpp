//Armstrong number check
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num; int var; int temp, digit;
    cin>>num;
    temp=num;
    while(temp>0){
        digit=temp%10;
        var+=pow(digit,3);
        temp/=10;
    }
    if (var==num){
        cout<<"Armstrong!\n";
    }
    else{
        cout<<"Not an armstrong number!";
    }
}