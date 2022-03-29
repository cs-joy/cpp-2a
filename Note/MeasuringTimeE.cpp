//Measuring Time Efficiency

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void randomDislay() {
    srandom(time(0));
    int sum = 0;
    for(int j = 0; j < 1000000000; j++) {
        sum += random();
    }
    cout << "sum= " << sum << endl;
}

int main() {
    clock_t start = clock();
    
    randomDislay();

    clock_t end = clock();
    double timediff = end - start;

    float functionExecutionTime = timediff/CLOCKS_PER_SEC;

    cout << "Function Execution Time: " << functionExecutionTime << " second" << endl;

    return 0;
}