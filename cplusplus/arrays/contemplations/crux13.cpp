#include <iostream>

using namespace std;

const int SZ = 10;

int main() {
    int js[SZ], V;

    //ask for integer number of an array
    cout << "Enter 10 integers: " << endl;
    for(int i = 0; i < SZ; i++) {
        cin >> js[i];
    }

    //ask for integer value to search
    cout << "Enter value of the V: " << endl;
    cin >> V;

    //search
    for(int i = 0; i < SZ; i++) {
        if( V == js[i]) {
            for(int j = i; j < SZ - 1; j++) {
                js[j] = js[j+1];
            }
            js[SZ-1] = 0;
            break;
        }
    }

    //print out the final result
    cout << "Final array: " << '\n';
    for(int s = 0; s < SZ; s++) {
       cout << js[s] << endl;
   }

    return 0;
}