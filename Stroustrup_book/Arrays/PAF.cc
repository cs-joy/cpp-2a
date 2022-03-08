//Pass an Arrays to a Function
#include <iostream>
using namespace std;

void pass(int arr) {
    cout << "# The element is " << arr;
}

//Here you are passing an unsized array arr[], i.e., it passed the whole array into the function.
void srPass(int srr[]) {
    for(int j = 0; j < 10; j++) {
        cout << "-----------------------" << endl;
        cout << "# The " << j << " element is " << srr[j] <<endl;
        cout << "-----------------------" << endl;
    }
}

int main() {
    int arr[5] = {2,4,6,8,0};
    int srr[10] = {9,8,7,6,5,0,4,3,2,1};

    for(int i = 0; i < 5; i++) {
        pass(arr[i]);
        cout << endl;
    }

    srPass(srr);

    return 0;
}