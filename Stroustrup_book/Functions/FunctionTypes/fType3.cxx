//Arguments passed but no return value
//ex03- fType3(Function Type Example 03)

#include <iostream>

using namespace std;

void tSharp(int n);

int main() {

    int numb = 0;
    cout << "Enter a positive number to check: " << endl;
    cin >> numb;

    //argument numb is passed to function tSharp()
    tSharp(numb);

    return 0;
}

// There is no return value to calling function. Hence, return type of function is void. */

void tSharp(int n) {
    int flag = 0;

    for(int i = 2; i <= n/2; i++) {
        if(n%i == 0) {
            flag = 1;
            break;
        }
    }
    if(flag == 1) {
        cout << n << " is not a prime number" << endl;
    }
    else {
        cout << n << " is a prime number" << endl;
    }
}
