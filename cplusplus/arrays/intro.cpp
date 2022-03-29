#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void testMethod();

//intro about multidimensional arrays
void MultidimensionalArray();

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
    clock_t st = clock();
    int rjs[5]; //declaration of a new array
    rjs[2] = 75; //access to an element of the array
    int x = rjs[2];
    cout << x << endl;
    clock_t en =  clock();
    double tidi = en - st;
    float exTime = tidi / CLOCKS_PER_SEC;
    cout << "rjs() take time to executing: " << exTime << " sec." << endl;
    //some of other valid operations with arrays
    clock_t start = clock();
    int brut[] = {16, 2, 77, 40, 12071};
    int n, result = 0;
    for(n = 0; n < 5; n++) {
        result += brut[n];
    }
    cout << "result is: "<< result << endl;
    clock_t end = clock();

    double timediff = end - start;

    float fExecutionTime = timediff/CLOCKS_PER_SEC;

    cout << "brut() take time to execute: " << fExecutionTime << " sec." << endl;

    clock_t str = clock();
    testMethod();
    clock_t endt = clock();
    double tDif = endt - str;
    float eT = tDif / CLOCKS_PER_SEC;
    cout << "executing time of testMethod(): " << eT << " sec."<< endl;
    return 0;
}

void testMethod() {
    int b[] {1, 2, 3, 4, 5};
    int a, result = 0;

    for(a = 0; a < 5; a++) {
        result += b[a];
    }
    cout << result << endl;
}

void MultidimensionalArray() {
    //Arrays of arrays
    //+  https://www.cplusplus.com/doc/tutorial/arrays/
}