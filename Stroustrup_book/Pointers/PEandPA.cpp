//Pointers Expression and Pointers Arithmetic
/*
A limited set of arithmetic operations can be performed on pointers which are:

incremented ( ++ )
decremented ( — )
an integer may be added to a pointer ( + or += )
an integer may be subtracted from a pointer ( – or -= )
difference between two pointers (p1-p2)

(Note: Pointer arithmetic is meaningless unless performed on an array.)
*/

#include <bits/stdc++.h>
using namespace std;

void jayScript() {
    //Declare an array
    int a[3] = {2, 4, 6};

    //Declare pointer variable
    int *ptr;

    //Assign the address of a[0] to ptr
    ptr = a;

    for (int i = 0; i < 3; i++) {

        //print value of ptr
        cout << "Value at ptr = " << ptr << endl;

        //print out value of *ptr
        cout << "Value at *ptr = " << *ptr << "\n";

        //Increament pointer ptr by 1
        ptr++;
    }
}

//Driver program
int main() {
    jayScript();
}