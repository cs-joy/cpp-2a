#include <iostream>

using namespace std;

int fac1(int n) {
    if(n <= 0) {
        return 1;
    } else {
        return fac1(n-1)*n;
    }
}

int main() {

    //declare variable
    int n, result;

    cout << "Enter a non-negative number:>_ ";
    cin >> n;

    //find out factorial of that number,, to call factorial()
    result = fac1(n);

    //print result
    cout << "Factorial of "<< n <<" is= " << result << endl;

    return 0;
}