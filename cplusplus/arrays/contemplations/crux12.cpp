#include <iostream>
using namespace std;

void forDisplay() {
    for(int i = 0; i < 11; i++) {
        cout << "i= " << i << endl;
    }
}

void usingRecursion(int, int);

int main() {
    forDisplay();

    //without for using to display 0-10 numbers
    cout << "without using for loop" << endl;
    static int i = 1;
    if( i <= 10) {
        cout << "i= " << i++ << " ";
        main();
    }


    return 0;
}