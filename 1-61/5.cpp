//Sum of natural numbers till n
#include<iostream>
using namespace std;
int main(){
    int n; int sum;
    cin >> n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout << sum;
    return 0;
}