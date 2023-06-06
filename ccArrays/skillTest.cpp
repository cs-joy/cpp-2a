#include<iostream>

using namespace std;

int main() {

    int arr[] = {1, 7, 2, 8, 10, 5, 2, 9, 5, 1, 6, 3, 4};

    int maximum, minimum, size_arr = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size_arr; i++) {
        for(int j=0; j<size_arr; j++) {
            cout << arr[i] << " " << arr[j] << " ";
        }
    }

    return 0;
}