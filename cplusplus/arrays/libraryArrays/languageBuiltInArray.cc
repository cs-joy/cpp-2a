#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    clock_t start = clock();
    int csArray[4] = {30, 20 , 10, 50};

    for(int c = 0; c < 4; c++) {
        ++csArray[c];
    }

    for(int elem: csArray) {
        cout << elem << '\n';
    }
    clock_t end = clock();

    double timeDiff = end - start;
    float executionTi = timeDiff/CLOCKS_PER_SEC;
    cout << "Execution Time: " << executionTi << " sec"<< endl;

    return 0;
}