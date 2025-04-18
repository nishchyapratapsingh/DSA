//Factorial
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int var=n;
    for(int i=1;i<n;i++){
        var=var*(n-i);
    }
    cout<<var<<endl;
    return 0;
}