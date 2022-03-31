#include <iostream>

using namespace std;

const int SZ = 10;

int main() {
    int js[SZ];
    int V;

    //ask for integer number of an array
    cout << "Enter 10 integers: " << endl;
    for(int i = 0; i < SZ; i++) {
        cin >> js[i];
    }

    //ask for integer value
    cout << "Enter V: " << endl;
    cin >> V;

    //search
    for(int i = 0; i < SZ; i++) {
        if( V == js[SZ]) {
            for(int j = i; j < SZ - 1; j++) {
                js[j] = js[j+1];
                js[SZ-1] = 0;
            }
        }
    }

    for(auto i: js) {
        cout << i << endl;
    }

    return 0;
}