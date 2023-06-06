#include<iostream>

using namespace std;

int power(int x, int y) {
    int _ans=1;

    while(y) {
        if(y&1) {
            _ans = _ans * x;
        }
        x = x*x;
        y >>= 1;
    }
    return _ans;
}

int main() {
    cout << power(2, 3) << endl;

    return 0;
}