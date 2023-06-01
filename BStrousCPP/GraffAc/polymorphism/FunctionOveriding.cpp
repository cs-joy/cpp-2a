// C++ program to demonstrate function overriding

#include <iostream>
using namespace std;

class Base {
    public:
        virtual void print() {
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

    //Call print() function of Derived class
    derived1.print();

    return 0;
}