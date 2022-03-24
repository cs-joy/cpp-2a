//no argument passed but a return value
//ex02-fType2(Function Type Example02)

#include <iostream>

using namespace std;

int sharp();

int main() {
    int number, i, flag = 0;
    //no argument passed to sharp()
    number = sharp();

    for(i = 2; i <= number/2; ++i) {
        if(number%i == 0) {
            flag = 1;
            break;
        }
    }
    
    if(flag == 1) {
        cout << number << " is not a prime number" << endl;
    }
    else {
        cout << number << " is a prime number" << endl;
    }

    return 0;
}

//Return type of function int
int sharp() {
    int n;
    cout << "Enter a positive number to check: " << endl;
    cin >> n;

    return n;
}
