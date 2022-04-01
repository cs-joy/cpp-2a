//demonstrate the working of
// capacity(), resize() and shrink_to_fit()

#include <iostream>
#include <string>

using namespace std;

int main() {
    //Initializing string
    string str = "Welcome to World Of Walker!";

    cout << "The initial string is: " << str << endl;

    //Resizing string using resize()
    str.resize(13);

    //Displaying string 
    cout << "The string after resize operation is: " << str << endl;

    //displaying the capacity of string
    cout << "The capacity of string is: " << str.capacity() << endl;

    //display the length of the string
    cout << "The length of the string is: " << str.length() << endl;

    //decreasing the capacity of string
    //using shrink_to_fit()
    str.shrink_to_fit();

    //displaying string
    cout << "The new capacity after shrinking is: " << str.capacity() << endl;

    return 0;
}