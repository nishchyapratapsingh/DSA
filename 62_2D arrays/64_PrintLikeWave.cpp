//Print like sine wave
#include<iostream>
using namespace std;
int main(){
    int twoDArray[4][4];
    for (int i=0;i<4;i++){
        for(int j=0;j<4;j++){
        cin>>twoDArray[i][j];
    }
}
    for(int j=0;j<4;j++){
        if(j%2==0){
            for(int i=0;i<4;i++){
                cout<<twoDArray[i][j]<<" ";
            }
        }
        else{
            for(int i=3;i>=0;i--){
                cout<<twoDArray[i][j]<<" ";
            }
        }
    }
    return 0;
}
