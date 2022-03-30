#define HEIGHT 3
#define WIDTH 5

#include <iostream>

using namespace std;

int main() {
    int jimmy[HEIGHT][WIDTH];
    int n,m;

    for(n = 0; n < HEIGHT; n++) {
        for(m = 0; m < WIDTH; m++) {
            jimmy[n][m] = (n+1) * (m+1);
        }
    }

     for(n = 0; n < HEIGHT; n++) {
        for(m = 0; m < WIDTH; m++) {
            cout<<jimmy[n][m] << "\t";
        }
        cout<<"\n";
    }


    return 0;
}