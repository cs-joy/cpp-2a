#include <iostream>

using namespace std;

void displayArray(int arg[], int length) {
    for(int n = 0; n < length; ++n) {
        cout << arg[n] << ' ';
    }
    cout << '\n';
}

int main() {
    int firstArray[] = {3, 5, 7};
    int secondArray[] = {2, 4, 6, 8, 10};

    displayArray(firstArray, 3);
    displayArray(secondArray, 5);


    return 0;
}