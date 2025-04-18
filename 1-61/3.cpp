//Write a program to check whether triangle is isosceles, scalene or equialteral
#include <iostream>
using namespace std;
int main(){
    int side1, side2, side3; int degree=100;
    cin>>side1>>side2>>side3;
    
    if (side1==side2&&side2==side3){
        cout<<"Equilateral\n";
    }
    else if (side1==side2||side2==side3||side1==side3){
        cout<<"Isosceles\n";
    }
    else{
        cout<<"Scalene\n";
    }
    return 0;
}