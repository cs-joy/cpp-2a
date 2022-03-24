//Overloading Using Different Types of Parameter
//ex01 - fOverloading1(Function Overloading Example01)

#include <iostream>

using namespace std;

//function with float type parameter
float salute(float var) {
    if(var < 0.0) {
        var = -var;
    }

    return var;
}

//function with int type parameter
int salute(int var) {
    if(var < 0) {
        var = -var;
    }
    
    return var;
}

int main() {

    //call function with int type parameter
    cout << "salute value of 5 = " << salute(5) << endl;

    //call function with float type parameter
    cout << "salue value of 5.5 = " << salute(5.5f) << endl;

    return 0;
}
