//Hollow Rhombus
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int j=n-i+1;j<=2*n-i;j++){
             if(i==1||i==n||(i+j)==n+1||i+j==n*2){
                cout<<"*";
             }
             else{
                cout<<" ";
             }
        }
        cout<<endl;
    }
    return 0;
}