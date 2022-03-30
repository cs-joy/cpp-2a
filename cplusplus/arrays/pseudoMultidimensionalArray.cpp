#define HEIGHT 5
#define WIDTH 3

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int jimmy [HEIGHT * WIDTH];
int n, m;

int main() {
    for(n = 0; n < HEIGHT; n++) {
        for(m = 0; m < WIDTH; m++) {
            jimmy[n * WIDTH + m] = (n + 1) * (m + 1);
        }
    }
    for(n = 0; n < HEIGHT; n++) {
        for(m = 0; m < WIDTH; m++) {
            cout << jimmy[n * WIDTH + m] << "\t";
        }
        cout << "\n";
    }    


    return 0;
}