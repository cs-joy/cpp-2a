//C++ string using string data type

#include <iostream>

using namespace std;

int main() {
    string sz;

    cout << "Enter a string: ";
    getline(cin, sz); // getline() function takes the input stream as the first parameter which is cin and str as the location of the line to be stored.

    cout << "You entered: " << sz << endl;

    return 0;
}