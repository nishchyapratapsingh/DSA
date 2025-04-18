//Pascal's triangle
#include<iostream>
using namespace std;
int factorial(int n){
    int fac=1;
    for(int i=1;i<=n;i++){
        fac=fac*i;
    }
    return fac;
}
int nCr(int n,int r){
    int ncr = factorial(n)/(factorial(n-r)*factorial(r));
    return ncr;
}
int main(){
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}