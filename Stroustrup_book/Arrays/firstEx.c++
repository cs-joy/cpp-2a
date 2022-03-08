#include <iostream>
using namespace std;

int main() {
    int *a;
    int age[10];

    cout << "Enter values for array age\n";

    for (int i = 0; i < 10; i++) {
        a = age; //make a point to the location where age points to.
        //remember age is a pointer pointing to age[0]

        //check whether both *a and *age are the same or not
        cout << "\n a points to " << *a << endl;
        cout << "age points to " << *age << endl;
    }

    return 0;
}