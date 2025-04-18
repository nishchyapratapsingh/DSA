//Add two binary numbers
#include<iostream>
using namespace std;
int dectobi(int dec){
    int bi=0,x=1;
    while(dec>0){
        bi+=(dec%2)*x;
        x*=10;
        dec/=2;
    }
    return bi;
}
int bitodec(int bi){
    int dec=0,x=1,lastdigit;
    while(bi>0){
        lastdigit=bi%10;
        dec+=lastdigit*x;
        x*=2;
        bi/=10;
    }
    return dec;
}
int binaryadd(int n1,int n2){
    n1=bitodec(n1); n2=bitodec(n2);
    int result=n1+n2;
    result=dectobi(result);
    return result;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<binaryadd(n1,n2);
    return 0;
}