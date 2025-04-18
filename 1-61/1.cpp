//create a program to print the maximum of three numbers
#include <iostream>
using namespace std;
int main(){
    int a,b,c; int max;
    cin >> a >> b >> c;
    if(a>b){
        max=a;
    }
    else{
        max=b;
    }
    if (c>max){
        c=max;
    }
    cout << "The biggest no is "<<max<<endl;
    return 0;
}