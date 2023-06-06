#include <iostream>

#define sizeR 3
#define sizeC 3

using namespace std;

int main() {

    int arr[sizeR][sizeC] = 
    {
        {1, 2, 3},
        {7, 8, 9},
        {4, 5, 6}
    };

    /*
    for(int i=0; i<sizeR; i++) {
        for(int j=0; j<sizeC; j++) {
            cin >> arr[i][j];
        }
    }
    */

    for(int i=0; i<sizeR; i++) {
        cout << endl;
        for(int j=0; j<sizeC; j++) {
            cout << arr[i][j] << " | ";
        }
    }
    cout << endl;

    cout << "\nswapping.." << endl;
    int temp = arr[0][0];

    arr[0][0] = arr[sizeR-1][sizeC-1];
    
    arr[sizeR-1][sizeC-1] = temp;
    
    for(int i=0; i<sizeR; i++) {
        cout << endl;
        for(int j=0; j<sizeC; j++) {
            cout << arr[i][j] << " | ";
        }
    }

    return 0;
}