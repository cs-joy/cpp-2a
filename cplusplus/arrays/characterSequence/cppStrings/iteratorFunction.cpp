//demonstrate the working of
// begin(), end(), rbegin(), rend()

#include <iostream>
#include <string>

using namespace std;

int main() {
    //Initializing string
    string srr = "Welcome to Walker!\nConnecting...";

    //Declaring iterator
    string iterator it;

    //Declaring reverse iterator
    string reverse_iterator it1;

    //Displaying string
    cout << "The string using forward iterators is: " << endl;
    for(it = srr.begin(); it != srr.end(); it++) {
        cout << *it;
    }
    cout << endl;

    //Displaying reverse string
    cout << "The reverse string using reverse iterators is: " << endl;
    for(it1 = srr.rbegin(); it1 != srr.rend(); it1++) {
        cout << *it1;
    }
    cout << endl;

    return 0;
}