#include <iostream>

using namespace std;

int main() {
    string myString = "Hello";
    //access the string
    cout << "" << myString[0] << endl;

    //Change String Characters
    myString[0] = 'J';
    cout << "" << myString << endl;

    return 0;
}