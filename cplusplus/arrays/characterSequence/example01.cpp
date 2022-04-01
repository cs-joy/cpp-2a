//C++ program to display a string entered by user.

#include <iostream>

using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    cout << "Your entered " << str << " string!" << endl;

    cout << "Enter another one string: ";
    cin >> str;

    cout << "Your entered " << str << endl;

    return 0;
}