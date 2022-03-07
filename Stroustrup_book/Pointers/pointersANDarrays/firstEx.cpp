//display address of each element of an array

#include <iostream>
using namespace std;

int main() {
    float arr[3];

    //declare pointer variable
    float *sjr;

    cout << "Displaying address using arrays: " <<endl;
    
    //use for loop to print addresses of all array elements
    for (int i = 0; i < 3; i++) {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    //sjr = &arr[0]
    sjr = arr;

    cout << "\nDisplaying address using pointers: " << endl;

    //use for loop to print addresses of all array elements
    //using pointer notation
    for (int i = 0; i < 3; ++i) {
        cout << "sjr + " << i << " = " << sjr + i << endl;
    }

    return 0;
}