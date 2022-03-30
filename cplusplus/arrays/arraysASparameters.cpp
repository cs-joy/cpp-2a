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

/*

int the code above, the first parameter (int arg[]) accepts any array whose elements are of type int, whatever its length. 
For that reason, we have included a second parameter that tells the function the length of each array that we pass to it as its first parameter. 
This allows the for loop that prints out the array to know the range to iterate in the array passed, without going out of range.


*/