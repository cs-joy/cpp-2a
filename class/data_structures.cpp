#include <iostream>
using namespace std;

void doubleTest() {
    double number;
    int m;
    cout << "how many times you want to check: ";
    cin >> m;
    while(m--){
        cout << "type double number: " << endl;
        cin >> number;

        cout << "number= " << number << "\n"; // Sufficient for storing 15 decimal digits
    }
}

void floatTest() {
    float number;
    int m;
    cout << "how many times you want to check: ";
    cin >> m;
    while(m--){
        cout << "number: " << endl;
        cin >> number;

        cout << "float number= " << number << "\n"; // Sufficient for storing 7 decimal digits
    }
}

int main() {
    doubleTest();
    return 0;
}