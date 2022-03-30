//illustrate two dimensional array

#include <iostream>
using namespace std;

int main() {

    //array declaration
    int test[3][5] = {
        {2, 4, 6, 8, 10},
        {9, 7, 5, 3, 2},
        {1, 3, 5, 7, 9}
    };

    //access the row of the array
    for(int i = 0; i < 3; i++) {
        //access the column of the array
        for(int j = 0; j < 5; j++) {
            cout << "test[ " << i << " ][ " << j << " ] = " << test[i][j] << endl; 
        }
    }
    cout << "-----------------------" << endl;
    cout << "------ExampleTwo-------" << endl;
    cout << "-----------------------" << endl;

    int arr[2][3];
    cout << "Enter 6 numbers: " << endl;

    //store the user input in the (arr[][]) array
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "The numbers are: " << endl;

    for(int s = 0; s < 2; s++) {
        for(int j = 0; j < 3; j++) {
            cout << "arr[ " << s << " ][ " << j << "] = " << arr[s][j] << endl;
        }
    }


    return 0;
}