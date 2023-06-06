#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

unsigned int onesComplement(unsigned int n) {
    vector<int> v;

    while(n!='0') {
        v.push_back(n%2);
        n = n/2;
    }
    cout << n << "\n";

    reverse(v.begin(), v.end());

    for(int i=0; i<v.size(); i++) {
        if(v[i] == 0) {
            v[i] = 1;
        } else {
            v[i] = 0;
        }
    }

    int two = 1;
    for(int j=v.size()-1; j >= 0; j++) {
        n = n + v[j] * two;
        two = two * 2;
    }

    return n;
}

int main() {

    unsigned int n = 22;
    cout << onesComplement(n);

    return 0;
}