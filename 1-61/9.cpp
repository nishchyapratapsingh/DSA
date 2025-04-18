//Check if given number is prime or not
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n; int count=0;
    cin >> n;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            cout<<n<<" is not a prime number!\n";
            count++;
            break;
        }
    }
    if(count==0){
        cout<<n<<" is a prime number!\n";
    }
    return 0;
}
