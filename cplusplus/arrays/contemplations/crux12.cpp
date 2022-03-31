#include <iostream>
using namespace std;

void forDisplay() {
    for(int i = 0; i < 11; i++) {
        cout << "i= " << i << endl;
    }
}

void usingRecursion(int, int);

int main() {
    cout << "display (0-10) numbers using for loop: " << endl;
    forDisplay();

    //without for using to display 0-10 numbers
    cout << "display (0-10) numbers without using for loop: " << endl;
    int i, end = 10;
    i = 0;
    while(i <= end) {
        cout << "i: " << i << endl;
        i++;
    }

    return 0;
}