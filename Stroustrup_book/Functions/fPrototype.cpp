//Function Prototype
/*
if we want to define a function after the function call, we need to use the function prototype.
*/

#include <iostream>

using namespace std;

//function prototype
void add(int, int);

int main() {

    //calling the function before declaration
    add(2, 2);

    return 0;
}

//function definition
void add(int a, int b) {
    cout << "a + b= " << (a + b) <<endl;
}
