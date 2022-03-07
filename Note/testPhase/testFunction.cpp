#include <iostream>
using namespace std;

void fread(), feof(); //Prototypes

int main() {
    fread();
    cout << "Hello World!" <<endl;
    feof();

    return 0;
}

void fread() {
    cout << "\"--C++ Programming--\"" <<endl;
}

void feof() {
    cout << "\"-!_!_!_!_!_!_!_!_!-\"" << endl;
}
