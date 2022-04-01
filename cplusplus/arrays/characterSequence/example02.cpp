//C++ program to read and display an entire line entered by user.

#include <iostream>

using namespace std;

int main() {
    char jrr[100];

    cout << "Enter a string: ";
    cin.get(jrr, 100);

    cout << "You entered: " << jrr << endl;

    return 0;
}