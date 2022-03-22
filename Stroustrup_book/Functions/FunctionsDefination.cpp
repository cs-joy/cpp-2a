//author :: md. zahangir alam

#include <iostream>

using namespace std;

//function
void newFunction() {
    cout << "I just got executed!\n";
}

//parameter arguments
void myFunction(string fname) {
    cout << fname << " Refsens\n";
}

//default parameter
void functionParameter(string country = "Bangladesh") {
    cout << country << "\n";
}

//multiple parameter
void multipleParameter(string fname, int age) {
    cout << fname << " Rafsan. " << age << " years old. \n";
}

//return values
/*
The void keyword, used in the previous examples, indicates that the function should not return a value. 
If you want the function to return a value, you can use a data type (such as int, string, etc.) 
instead of void, and use the return keyword inside the function:
*/
int myReturn(int x) {
    return 1 + x;
}

//return values with two parameters
int twoParam(int s, int j) {
    return s + j;
}

//pass by reference
void swapNumbs(int &s, int &j) {
    int z = s;
    s = j;
    j = z;
}

//pass arrays
/*
# Pass Arrays as Function Parameters
*/
void arraysFunction(int myNumbers[5]) {
    for(int i = 0; i < 5; ++i) {
        cout << myNumbers[i] << endl;
    }
}

//function overloading
int plusFuncInt(int a, int b) {
    return a + b;
}
double plusFuncDouble(double a, double b) {
    return a + b;
}

/*
# Instead of defining two functions that should do the same thing, it is better to overload one.

In the example below, we overload the plusF function to work for both int and double:
*/

int plusF(int x, int y) {
    return x + y;
}

double plusF(double x, double y) {
    return x + y;
}

//recursion
/*
# Recursion is the technique of making a function call itself. 
This technique provides a way to break complicated problems down into simple problems which are easier to solve.

#Adding two numbers together is easy to do, but adding a range of numbers is more complicated. In the following example, recursion is used to add a range of numbers together by breaking it down 
into the simple task of adding two numbers:
*/
int sum(int k) {
    if(k > 0) {
        return k + sum(k - 1);
    }
    else {
        return 0;
    }
}



int main() {
    cout << "-----------" << endl;
    cout << "explanation > functions\n";
    cout << "-----------" << endl;
    newFunction();
    newFunction();
    cout << "\n-----Function Parameters------" << endl;
    cout << "-----------" << endl;
    cout << "explanation > parameter/arguments\n";
    cout << "-----------" << endl;
    myFunction("Bob");
    myFunction("Alex");
    cout << "-----------" << endl;
    cout << "explanation > default parameter\n";
    cout << "-----------" << endl;
    functionParameter("USA");
    functionParameter();
    cout << "-----------" << endl;
    cout << "explanation > multiple parameter\n";
    cout << "-----------" << endl;
    multipleParameter("Liam", 7);
    multipleParameter("Anna", 11);
    cout << "-----------" << endl;
    cout << "explanation > return values\n";
    cout << "-----------" << endl;
    cout << myReturn(4) << endl;
    cout << twoParam(2, 2) << endl;
    int z = twoParam(4, 2);
    cout << z << endl;
    cout << "-----------" << endl;
    cout << "explanation > pass by reference\n";
    cout << "-----------" << endl;
    int fN = 10;
    int sN = 20;
    cout << "Before swap: " << "fN=" << fN << " sN=" << sN << endl;
    //Call the function, which will change the values of fN and sN
    swapNumbs(fN, sN);
    cout << "After swap: " << "fN=" << fN << " sN=" << sN << endl;
    cout << "-----------" << endl;
    cout << "explanation > Pass Arrays as Function Parameters\n";
    cout << "-----------" << endl;
    int myNumbers[5] = {10, 20, 30, 40, 50};
    arraysFunction(myNumbers);
    cout << "-----------" << endl;
    cout << "explanation > Function Overloading\n";
    cout << "-----------" << endl;
    cout <<"------Example01-------" << endl;
    int myNumb1 = plusFuncInt(3, 4);
    double myNumb2 = plusFuncDouble(3.54, 4.23);
    cout << "Int: " << myNumb1 << " Double: " << myNumb2 << endl;
    cout <<"------Example02-------" << endl;
    int myN1 = plusF(7, 3);
    double myN2 = plusF(5.54, 9.69);
    cout << "Int: " << myN1 << " Double: " << myN2 << endl;
    cout << "-----------" << endl;
    cout << "explanation > Recursion\n";
    /*
    When the sum() function is called, it adds parameter k to the sum of all numbers smaller than k and returns the result. 
    When k becomes 0, the function just returns 0. When running, the program follows these steps:
    ```
    10 + sum(9)
    10 + ( 9 + sum(8) )
    10 + ( 9 + ( 8 + sum(7) ) )
    ...
    10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
    10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0
    ```
    Since the function does not call itself when k is 0, the program stops there and returns the result.
    */
    /*The developer should be very careful with recursion as it can be quite easy to slip into writing a function which never terminates, or one that uses excess amounts of memory or processor power. However, 
      when written correctly recursion can be a very efficient and mathematically-elegant approach to programming.
    */
    cout << "-----------" << endl;
    int result = sum(10);
    cout << result;
    
    return 0;
}

