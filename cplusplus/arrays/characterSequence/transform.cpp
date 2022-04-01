#include <iostream>
#include <string>

using namespace std;

int main() {
    char myntcs[] = "Alhamdulillah!";
    string mystring = myntcs; //convert c-string to string

    cout << mystring << endl; //printed as a library string
    cout << mystring.c_str() << endl; //printed as a c-string
    //@note: both c_str() and data() members of string are equivalent)
    cout << mystring.data() << endl;


    return 0;
}