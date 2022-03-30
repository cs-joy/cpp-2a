#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>

using namespace std;

int main() {
    clock_t start = clock();
    array <int, 3> sArr{9, 29, 49};
    for(int j = 0; j < sArr.size(); j++) {
        ++sArr[j];
    }

    for(int elem: sArr) {
        cout << elem << endl;
    }
    clock_t end = clock();
    double timeDifference = end - start;

    float execuTime = timeDifference/CLOCKS_PER_SEC;
    cout << "Excution time: " << execuTime << " sec" << endl;

    return 0;
}