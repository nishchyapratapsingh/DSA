//Print all prime numbers between a and b
#include<iostream>
using namespace std;
int main(){
    int a,b,c=0; int i;
    cin >> a >> b;
    for(int j=a;j<=b;j++){
        for(i=2;i<j;i++){
            if(j%i==0){
                break;
            }
        }
        if (i==j){
            cout<<j<<" ";
        }
    }
    return 0;
}