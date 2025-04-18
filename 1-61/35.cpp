//Print all prime numbers between two given numbers using functions
#include<iostream>
#include<cmath>
using namespace std;
void ifPrime(int num){
    int fac=0;
    for(int i=1;i<=sqrt(num);i++){
        if(num%i==0){
            fac++;
        }
    }
    if(num!=1){
        if(fac==1){
        cout<<num<<" ";
        }
    }
    
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        ifPrime(i);
    }
    return 0;
}