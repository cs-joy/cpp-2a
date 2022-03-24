//Arguments passed and a return value.
//ex04- fType4(Function Type Example 04)

#include <iostream>

using namespace std;

int jayScript(int n);

int main() {
    int num, flag = 0;
    cout << "Enter a positive number to check: " << endl;
    cin >> num;

    //argument num is passed to check jayScript() function
    flag = jayScript(num);

    if(flag == 1) {
        cout << num << " is not a prime number" << endl;
    }
    else {
        cout << num << " is a prime nuber" << endl;
    }

    return 0;
}

//this function return integer value
int jayScript(int n) {
    for(int i = 2; i <= n/2; i++) {
        if(n%i == 0) {
            return 1;
        }
    }

    return 0;
}
