#include <iostream>
using namespace std;

int main() {

    int n[ 10 ]; //n is an array of 10 integers

    //declare an double type array
    double balance[10] = {1004.0, 405.87, 1005.50, 302.34, 509.67, 609.98, 205.0, 450.45};
    balance[9] = {100.10};

    //result print
    for (int i = 0; i < 10; i++) {
        cout << "balance[" << i << "]=" << balance[i] << "\n" << endl;
    }

    double mySalary = balance[5];
    cout<< "mySalary= " << mySalary << endl;

    //initialize elements of array n to 0
    for (int i = 0; i < 10; i++) {
        n[ i ]  = i + 100; //set element at location i to i + 100
    }

    cout << "Elements\tValue" << endl;

    //output each array elements value
    for (int j = 0; j < 10; j++) {
        cout << " \t" << j << " \t" << n[ j ] << endl;
    }

    return 0;
}