//@ Virtial Function - A virtual function is a member function in the base class that we expect to redefine in derived classes.

#include <iostream>

using namespace std;

class Base {
    public:
        virtual  void print() {
            cout << "Base Function" << endl;
        }
};

class Derived : public Base {
    public:
        void print() {
            cout << "Derived Function" << endl;
        }
};

int main() {

    Derived derived1;

    //pointer of Base type that points to derived1
    Base* base1 = &derived1;

    //call member function of Derived class
    base1->print();

    return 0;
}