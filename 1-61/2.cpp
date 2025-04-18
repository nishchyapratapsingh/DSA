//Check whether given number is odd or even
#include <iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    if(num%2==0){
        cout << "Even!";
    }
    else{
        cout << "Odd!";
    }
    main();
    return 0;
}