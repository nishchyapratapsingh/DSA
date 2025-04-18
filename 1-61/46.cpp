//Decimal to hexadecimal
#include<bits/stdc++.h>
using namespace std;
void dectohex(int dec){
    char arr[50];
    int n; //length of array
    for(int i=0;dec>0;i++){
        if(dec%16<10){
            arr[i]=48+(dec%16);  //ASCII value of 0 is 48
        }
        else{
            arr[i]=55+(dec%16);  //ASCII value of A is 55
        }
        dec/=16;
        n=i;
    }
    for(int i=n;i>=0;i--){
        cout<<arr[i];
    }
}
int main(){
    int dec;
    cin>>dec;
    dectohex(dec);
    return 0;
}