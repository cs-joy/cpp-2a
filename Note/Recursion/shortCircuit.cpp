#include <iostream>

using namespace std;

static int fac2(int n) {
    //assert(n >= 2);
    if(n == 2) {
        return 2;
    }
    else {
        return fac2(n - 1) * n;
    }
}

int fac2wrapper(int n) {
    if(n <= 1) {
        return 1;
    }
    else {
        return fac2(n);
    }
}

int main() {

    //declare variable
    int n, result;

    cout << "Enter a non-negative number:>_ ";
    cin >> n;

    //find out factorial of that number,, to call factorial()
    result = fac2wrapper(n);

    //print result
    cout << "Factorial of "<< n <<" is= " << result << endl;

    return 0;
}