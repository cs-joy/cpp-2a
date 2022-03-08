//Two Dimensional Array
#include <iostream>
using namespace std;

int main() {
    int TdSrr[3][3] = { {1, 3, 5}, {2, 4, 6}, {7, 9, 11} };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << TdSrr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}