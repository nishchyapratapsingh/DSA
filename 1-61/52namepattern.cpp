#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cout<<"Write your name in capital alphabet \n";
    getline(cin, name);
    int n=name.length();
    string trimmedname;
    for(char c: name){   //for all c in name
        if(c != ' '){
            trimmedname+=c;
        }
    }
    n=trimmedname.length();
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<trimmedname[j]<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<=n-i-1;j++){
            cout<<trimmedname[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}