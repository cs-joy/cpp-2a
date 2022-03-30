#define WIDTH 3
#define HEIGHT 5

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int jimmy[HEIGHT][WIDTH];
int n, m;

int main() {
    clock_t start = clock();

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

    clock_t end = clock();

    double timediff = end - start;
    float executionTime = timediff/CLOCKS_PER_SEC;
    cout << "Execution time: " << executionTime << " sec."<< endl;

    return 0;
}