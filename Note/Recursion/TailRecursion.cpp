// Tail-recursive functions

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {

    int firstNumber, secondNumber, TailRecur;
    cout << "Input two integer number where you will meet with this condition(a >= b; b >= 0): ";
    cin >> firstNumber >> secondNumber;

    TailRecur = gcd(firstNumber, secondNumber);

    cout << "gcd(" << secondNumber << ", " << firstNumber << " % " << secondNumber << ")= " << TailRecur << endl;

    return 0;
}