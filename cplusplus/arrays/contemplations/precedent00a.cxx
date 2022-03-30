#include <iostream>
using namespace std;

int main() {
    int sjArr[3][5][2];

    cout << "Enter (30) Elements Of Three Dimensional Array: " << endl;

    //take input from user
    for(int s = 0; s < 3; s++) {
        for(int j = 0; j < 5; j++) {
            for(int z = 0; z < 2; z++) {
                cin >> sjArr[s][j][z];
            }
        }
    }

    //display the result
    for(int s = 0; s < 3; s++) {
        for(int j = 0; j < 5; j++) {
            for(int z = 0; z < 2; z++) {
                cout << "sjArr[ " << s << " ][ " << j << " ][ " << z << " ] = " << sjArr[s][j][z] << endl;
            }
        }
    }

    return 0;
}