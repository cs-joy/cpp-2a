/*
### Changing Value Pointed by Pointers
  If pointVar points to the address of var, we can change the value of var by using *pointVar.

  For example,

  ```
  int var = 5;
  int* pointVar;

  // assign address of var
  pointVar = &var;

  // change value at address pointVar
  *pointVar = 1;

  cout << var << endl; // Output: 1
  ```
Here, pointVar and &var have the same address, the value of var will also be changed when *pointVar is changed.

*/

// P :: Changing Value Pointed by Pointers

#include <iostream>
using namespace std;
int main() {
    int var = 2; //actual variable declaration
    int* pointVar; //pointer variable

    //store address of var
    pointVar = &var;

    //print the value of var
    cout << "var = " << var << endl;

    //print the result of *pointVar
    cout << "*pointVar = " << *pointVar <<endl << endl;

    cout << "Changing the vaule of var variable to 4:" << endl;

    //change the vaule of var to 4
    var = 4;

    //print value of var
    cout << "var = " << var << endl;

    //print value of *pointVar
    cout << "*pointVar = " << *pointVar << endl <<endl;

    cout << "Changing vaule of *pointVar to 6:" << endl;
    *pointVar = 6;

    //print value of var
    cout << "var = " << var << endl;

    //print value of *pointVar
    cout << "*pointVar = " << *pointVar << endl;

    return 0;
}