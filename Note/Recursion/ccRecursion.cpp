// A function that calls itself is known as a recursive function. 
// And, this technique is known as recursion.

#include <iostream>

using namespace std;

int sum(int j) {
    if(j > 0) {
        return j + sum(j - 1);
    } else {
        return 0;
    }
}

int main() {
    int result = sum(10);
    cout << result << endl;

    return 0;
}
