/*Palindrome
    1
  2 1 2
3 2 1 2 3
 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i)*2;j++){
            cout<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<j<<" ";
        }
        for(int j=2;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}