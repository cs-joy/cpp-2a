/*--Application of Pointers--

Functions in C++ can return only one value. Further, all the variables declared in a function are allocated on the function call stack. As soon as the function returns, all the stack variables are destroyed.

Arguments to function are passed by value, and any modification done on the variables doesn’t change the value of the actual variables that are passed. Following example helps illustrate this concept:-

*/

#include <iostream>
using namespace std;
void test(int*, int*);

int main() {
    int x = 2, y = 2;

    cout << "Before changing: " << endl;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    test(&x, &y);
    cout << "After changing: " <<endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}

void test(int* n1, int* n2) {
    *n1 = 10;
    *n2 = 11;
}