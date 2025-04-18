//Binary to decimal
#include<iostream>
#include<math.h>
using namespace std;
int bitode(int n){
    int var=0;
    int i=0;
    while(n>0){
        int lastdigit=n%10;
        var+=pow(2,i)*lastdigit;
        n/=10;
        i++;
    }
    return var;
}
int main(){
    int binary;
    cin>>binary;
    cout<<bitode(binary);
    return 0;
}