//ex01 - fType1(FunctionType01) No arguments passed and no return value

#include <iostream>

using namespace std;

void cSharp();

int main() {
    //no argument passed to Sharp()
    cSharp();

    return 0;
}

// Return type of function is void because value is not returned.
void cSharp() {
    int num, i, flag = 0;

    cout << "Enter a positive integer enter to check: " << endl;
    cin >> num;

    for(i = 2; i <= num/2; ++i)
    {
        if(num % i == 0)
        {
            flag = 1; 
            break;
        }
    }

    if (flag == 1)
    {
        cout << num << " is not a prime number." << endl;;
    }
    else
    {
        cout << num << " is a prime number. " << endl;
    }
}
