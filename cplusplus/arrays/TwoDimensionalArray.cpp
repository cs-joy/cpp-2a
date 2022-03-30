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
    return 0;
}