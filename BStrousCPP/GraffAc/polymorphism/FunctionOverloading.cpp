// C++ program to overload sum() function  |
//-----------------------------------------|

#include <iostream>

using namespace std;

//Function with 2 int parameter
int sum(int num1, int num2) {
    return num1 + num2;
}

//Function with 2 double parameter
double sum(double num1, double num2) {
    return num1 + num2;
}

//Function with 3 int parameter
int sum(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

int main() {

    //call function with 2 int parameter
    cout << "Sum1 = " << sum(5, 6) << endl;

    //call function with 2 double parameter
    cout << "Sum2 = " << sum(5.5, 6.6) << endl;

    //call function with 3 int parameter
    cout << "Sum3 = " << sum(5, 6, 7) << endl;

    return 0;
}