#include<iostream>
using namespace std;

int intsqrt (int x) {
    int s = 0;
    int e = x;
    int m = s + (e - s)/2;

    while (e > s) {
        if (m*m == x){
            return m;
            break;
        }

        else if (m*m < x){
            s = m+1;
        }

        else
            e = m-1;

        m = s + (e - s) / 2;
    }

    return s-1;
}

double moreprecision (int x, int intans, int precision) {

    double tempans = intans;
    double factor = 1;

    for (int i = 0; i < precision; i++) {
        factor = factor / 10;

        for (double j = tempans; j*j < x; j = j + factor) {
            tempans = j;
        }
    }

    return tempans;
}

int main() {
    int x;
    int precision;

    do{

        cout<<"Enter number: ";
        cin >> x;

        if(x == 0){
            break;
        }

        cout << "Enter precision: ";
        cin >> precision;

        int intans = intsqrt (x);

        cout << "Answer is: " << moreprecision(x, intans, precision) << endl;

    } while(1);

}
