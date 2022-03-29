#include <iostream>
using namespace std;

void aFunction(int* a)
{
    cout << *a << endl;
}

int main()
{
    int a = 10;
    const int* iVariable = &a;
    
    aFunction(const_cast<int*>(iVariable)); 
/*Since the function designer did not specify the parameter as const int*, we can strip the const-ness of the pointer iVariable to pass it into the function. 
Make sure that the function will not modify the value. */

    return 0;
} 