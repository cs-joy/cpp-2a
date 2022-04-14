#include <iostream>
#include <vector>

using namespace std;

int main() {
    //::::method-1>> initializer list
    vector<int> vector1 = {1, 2, 3, 4, 5};

    //::::method-2>> uniform initialization
    vector<int> vector2{5, 4, 3, 2, 1};

    //::::method-3
    vector<int> vector3(5, 12);

    cout << "vector1 = ";
    //ranged loop
    for(const int& i : vector1) {
        cout << i << " ";
    }

    cout << "\nvector2 = ";
    //ranged loop
    for(const int& i : vector2) {
        cout << i << " ";
    }

    cout << "\nvector3 = ";
    //ranged loop
    for(const int& i : vector3) {
        cout << i << " ";
    }

    return 0;
}