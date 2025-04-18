//Print all numbers from 1 to 100 except those divisible by 3 (USE CONTINUE)
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<" ";
    }
    return 0;
}