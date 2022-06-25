#include <iostream>
using namespace std;

int main(){

    int num = 3, num2 = 6;
    int sub, div;

    if (!(num > num2)){
        sub = num2 - num;
        cout << "subtraction of " << num2 << " and " << num << " is= " << sub << endl;
        div = num2 / num;
        cout << "division of " << num2 << " and " << num << " is= " << div;
    } else {
        sub = num - num2;
        cout << "subtraction of " << num << " and " << num2 << " is= " << sub << endl;
        div = num / num2;
        cout << "division of " << num << " and " << num2 << " is= " << div;
    }

    return 0;
}