//Factorial of a number

#include <iostream>

using namespace std;

int factorial(int n) {
    if(n > 1) {
        return n * factorial(n-1);
    }
    else {
        return 1;
    }
}

int main() {
    //declare variable
    int number, result;

    cout << "Enter a non-negative number:>_ ";
    cin >> number;

    //find out factorial of that number,, to call factorial()
    result = factorial(number);

    //print result
    cout << "Factorial of "<< number <<" is:>_ " << result << endl;

    return 0;
}