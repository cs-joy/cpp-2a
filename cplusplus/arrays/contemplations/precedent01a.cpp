//passing multidimensional array to a function

#include <iostream>

using namespace std;

//declare function
//pass two dimensional(2d) array to function
void display(int rj[][2]) {
    for(int j = 0; j < 4; j++) {
        for(int s = 0; s < 2; s++) {
            cout << "rj[ " << j << " ][ " << s << " ]= " << rj[j][s] << endl;
        }
    }
}

int main() {
    //initialize 2d array
    int num[4][2] = {
        {2, 4},
        {1, 3},
        {6, 8},
        {5, 7}
    };

    //call the display function and pass this array(2d array) as an argument
    display(num);

    return 0;
}