#include <iostream>

using namespace std;

int main() {
    //@tDar[][][] array can able to store upto 60 elements(3*5*4 = 60)
    int tDarr[3][5][4] = {
        { { 6, 2, 8, 9 }, { 4, 2, 7, 1 }, { 5, 7, 2, 3 }, { 9, 4, 6, 8 }, { 1, 6, 7, 4 }, },
        { { 1, 3, 5, 7 }, { 7, 4, 2, 5 }, { 2, 4, 6, 8 }, { 4, 3, 9, 6 }, { 7, 1, 4, 3 }, },
        { { 3, 5, 1, 6 }, { 5, 6, 1, 8 }, { 9, 8, 2, 5 }, { 7, 9, 3, 7 }, { 8, 2, 1, 4 }, }
    };

    //display the value with proper index
    for(int r = 0; r < 3; r++) {
        for(int j = 0; j  < 5; j++) {
            for(int s = 0; s < 4; s++) {
                cout << "tDarr[ " << r << " ][ " << j << " ][ " << s << " ]= " << tDarr[r][j][s]  << endl;
            }
        }
    }

    return 0;
}