//Check if three numbers are pythagorean triplets
#include<iostream>
#include<math.h>
using namespace std;
bool checkPT(int x, int y, int z){
    if(pow(x,2)==pow(y,2)+pow(z,2)||pow(y,2)==pow(x,2)+pow(z,2)||pow(z,2)==pow(y,2)+pow(x,2)){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(checkPT(a,b,c)){
        cout<<"Pythagorean Triplet!\n";
    }
    else{
        cout<<"Not a Pythagorean Triplet!\n";
    }
    return 0;
}