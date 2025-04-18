#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int reverse=0;
    while(num>0){
        int lastdigit=num%10;
        reverse=reverse*10+lastdigit;
        num/=10;
    }
    cout<<reverse;
    return 0;
}