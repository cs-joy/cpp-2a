#include <iostream>
#include <array>

using namespace std;

int main() {

    //Initializing the arrays
    int foo[10] = {22, 43, 28, 65, 46, 50, 72, 51, 58, 83};
    int bar[5] = {10, 20, 30};

    //The initializer can even have no values, just the braces:
    int baz[5] = {};

    int color[] = {16, 2, 77, 40, 12071};
    //find out array size using @sizeof operator
    int arraySize = sizeof(color) / sizeof(color[0]);

    //universal initializing
    int jayScript[] = {44, 38, 79, 88, 55};
    int jayS[] {5, 3, 8, 6, 4};

    cout << foo[9] << endl;
    cout << bar[3] << endl;
    cout << baz[4] << endl;
    cout << color[3] << " & arraySize: " << arraySize << endl;
    cout << jayScript[4] << endl;
    cout << jayS[3] << endl;
    //End Topic:> initializing the arrays
    cout << "-------------------" << endl;
    cout << "-------------------" << endl;
    //Start Topic:> Accessing the values of an array



    return 0;
}