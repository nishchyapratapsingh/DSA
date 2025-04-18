//Printing digits of positive decimal number from right to left
#include<iostream>
using namespace std;
int main(){
    int num; 
    cin>>num;
    while (num!=0)
    {
        cout<<num%10;
        num=num/10;
    }
    return 0;
}