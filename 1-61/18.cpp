//Butterfly Pattern
/*
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){  //top part
        for(int j=1;j<=n;j++){ //left
            if(j<=i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(int j=1;j<=n;j++){  //right
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){ //bottom part
        for(int j=n;j>0;j--){ //left
            if(j<i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        for(int j=n;j>n-i+1;j--){ //right
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
