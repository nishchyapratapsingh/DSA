//Fibonacci series 0 1 1 2 3 5 8
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<0<<"\t";
    }
    else if(n==2){
        cout<<0<<"\t"<<1<<"\t";
    }
    else{
        int a=0, b=1;
        cout<<a<<" "<<b<<" ";
        for(int i=1;i<=n-2;i++){
            int c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }
    }
    return 0;
}