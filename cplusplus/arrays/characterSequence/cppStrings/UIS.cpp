//User Input Strings

#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName;
    cout << "Write your first name: ";
    cin >> firstName;
    cout << "Your name is: " << firstName << endl;

    cout << "--------------" << endl;

    string fullName;
    cout << "Write here your full name: ";
    getline(cin, fullName);
    cout << "Fullname is : " << fullName << endl;

    return 0;
}