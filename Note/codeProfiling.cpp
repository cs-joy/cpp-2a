#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void calSum() {
    int sum = 0;
    for(int i = 0; i < 100; i++) {
        sum += random();
        cout << sum << endl;
    }
}

int main() {
    clock_t start = clock();

    srandom(time(0));
    calSum();

    clock_t end = clock();

    double timediff = end - start;

    cout << "time taken by the program to execute: " << timediff/CLOCKS_PER_SEC << "sec"<< endl;

    return 0; 
}