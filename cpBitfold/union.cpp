#include<iostream>

using namespace std;

//// declaring_a_union
union RecordType {
    int intNum;
    float floatNum;
    double doubleNum;
    long longNum;
    char chaR;
    int* intPtr;
    double* dPtr;
};

int main() {

    //create object
    RecordType obj;
/*
    //access members and assign value
    obj.intNum = 5; //obj holds an int

    obj.floatNum = 3.576; //obj holds a float
*/
    obj.doubleNum = 123.606; //obj holds a double
    /*
    obj.longNum = 103458.34757345; //obj holds a long
    obj.chaR = 'J'; //obj holds an char
    int a = obj.intNum;
    obj.intPtr= &a; //obj holds a integer pointer
*/
    //display the result
    cout << "--DISPLAY INFO--" << endl;
/*
    cout << "floatNum= " << obj.floatNum << endl;
*/
    cout << "doubleNum= " << obj.doubleNum << endl;
    /*
    cout << "longNum= " << obj.longNum << endl;
    cout << "longNum= " << obj.longNum << endl;
    cout << "chaR= " << obj.chaR << endl; */
    double a = obj.doubleNum;
    obj.dPtr= &a; //obj holds a integer pointer

    cout << "address of dPtr= " << obj.dPtr << endl;

    cout << "value of dPtr= " << *obj.dPtr << endl;
    cout << "size= " << sizeof(RecordType) << endl;

    return 0;
}
