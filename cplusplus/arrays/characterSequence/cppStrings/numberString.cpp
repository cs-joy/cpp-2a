#include <iostream>
#include <string>

using namespace std;

int main() {

    /*
    C++ uses the '+' operator for both 'addition' and 'concatenation'.
    @ Numbers are added. 
    @ Strings are concatenated.
    */
    // numbers are added
    int x, y, z;

    x = 2;
    y = 2;
    z = x + y;

    cout << "z= " << z << endl;

    //strings are concatenated
    string r, j, s;
    r = "2";
    j = "2";
    s = r + j;

    cout << "s= " << s << endl;

    return 0;
}