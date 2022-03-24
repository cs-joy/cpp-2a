//Overloading Using Different Number of Parameters

/* ex02- fOverloading2(Function Overloading Example 02) */

#include <iostream>

using namespace std;

//function with two parameters
void display(int s, double j) {
    cout << "Integer number: " << s;
    cout << " and Double number: " << j << endl;
}

//function with double type single parameter
void display(double Sj) {
    cout << "Double number: " << Sj << endl;
}

//function with int type single parameter
void display(int sJay) {
    cout << "Integer number: " << sJay << endl;
}

int main() {
    int r = 5;
    double i = 5.5;

    //call function with int type parameter
    display(r);

    //call function with double type parameter
    display(i);

    //call function with two parameters
    display(r, i);

    return 0;
}
