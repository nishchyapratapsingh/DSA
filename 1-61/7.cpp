//Print all numbers from 1 to 100 except those divisible by 3
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
        while(1){
            if (i%3==0){
                break;
            }
            cout<<i<<" ";
            break;
        }

    }
    return 0;
}