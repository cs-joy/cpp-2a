//demonstrate the working of
// begin(), end(), rbegin(), rend()

#include <iostream>
#include <string>

using namespace std;

int main() {
    //Initializing string
    string srr = "Welcome to Walker!\nConnecting...";

    //Declaring iterator
    std::string::iterator sz;

    //Declaring reverse iterator
    std::string::reverse_iterator zs;

    //Displaying string
    cout << "The string using forward iterators is: " << endl;
    for(sz = srr.begin(); sz != srr.end(); sz++) {
        cout << *sz;
    }
    cout << endl;

    //Displaying reverse string
    cout << "The reverse string using reverse iterators is: " << endl;
    for(zs = srr.rbegin(); zs != srr.rend(); zs++) {
        cout << *zs;
    }
    cout << endl;

    return 0;
}