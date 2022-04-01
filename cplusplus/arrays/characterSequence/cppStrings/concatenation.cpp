#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName = "John ";
    string lastName = "Doe";

    string fullName = firstName + lastName;

    cout << "Full Name: " << fullName << endl;

    //concatenation using append()
    string fName = firstName.append(lastName);
    cout << "Full Name: " << fName << endl ;

    return 0;
}