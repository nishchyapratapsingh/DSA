//nCr calculator
#include<iostream>
using namespace std;
int factorial(int n){
    int fac=1;
    for(int i=1;i<=n;i++){
        fac=fac*i;
    }
    return fac;
}
void nCr(int n,int r){
    int ncr = factorial(n)/(factorial(n-r)*factorial(r));
    cout<<ncr;
}
int main(){
    int n,r;
    cin>>n>>r;
    nCr(n,r);
    return 0;
}