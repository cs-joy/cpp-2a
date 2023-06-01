#include<iostream>

using namespace std;

void BitwiseComplement() {
    //N = -(N + 1)
    int num  = 35;
    int num2 = 100;
    int num3 = -150;

    cout << "~(" << num << ")= " << (~num) << endl;
    cout << "~(" << num2 << ")= " << (~num2) << endl;
    cout << "~(" << num3 << ")= " << (~num3) << endl;
}

void ShifOperator() {
    unsigned int a = 10;

    cout << " x << " << " 1 =" << (a << 1) << endl;
    cout << " x << " << " 2 =" << (a << 2) << endl;
    cout << " x << " << " 3 =" << (a << 3) << endl;
}

int main() {

    int a,b;
    a = 12;
    b = 25;

    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;

    BitwiseComplement();


    ShifOperator();



    return 0;
}
