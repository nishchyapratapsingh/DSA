//Fibonacci series using function
#include<iostream>
using namespace std;
void fibSeries(int num){
    int a=0,b=1;
    if(num==1){
        cout<<a;
    }
    else if(num==2){
        cout<<a<<" "<<b;
    }
    else{
        cout<<a<<" "<<b<<" ";
        for(int i=1;i<=num-2;i++){
            int c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }
    }
}
int main(){
    int n;
    cin>>n;
    fibSeries(n);
}