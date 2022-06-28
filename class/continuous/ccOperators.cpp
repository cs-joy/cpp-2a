#include <iostream>

using namespace std;

void sizeofOperator();

int main() {

    sizeofOperator();

    return 0;
}

void sizeofOperator(){

    int intVariable;
    float floatVariable;
    char charVariable;
    string stringVariable;
    double doubleVariable;

    cout << "size of 5 data types\n\n";
    cout << sizeof(intVariable) << "\n" << sizeof(floatVariable) << "\n" << sizeof(charVariable) << "\n" << sizeof(stringVariable) << "\n" << sizeof(doubleVariable) << "\n";

    cout << "------second-----" << endl;
    int a = 15;
    double d = 3.43;

    int b = sizeof(a++); //value of a doesn't change

    cout << "sizof b= " << b << " and a= " << a << endl;
    cout << "sizeof (a + d)= " << sizeof(a+d);
}