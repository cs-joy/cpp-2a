#include <iostream>

using namespace std;

//base class
class Animal {
    
    private:
        string color;
    
    protected:
        string type;

    public:
        void eat() {
            cout << "I can eat!" << endl;
        }

        void sleep() {
            cout << "I can sleep!" << endl;
        }

        void setColor(string clr) {
            color = clr;
        }

        string getColor() {
            return color;
        }

};

//derived class
class Dog : public Animal {

    public:
        void setType(string tp) {
            type = tp;
        }

        void displayInfo(string c) {
            cout << "I am a " << type << endl;
            cout << "My color is " << c << endl;
        }

        void bark() {
            cout << "I am bark! woof!" << endl;
        }

};

int main() {

    //create object
    Dog dog1;

    //Calling members of the base class
    dog1.eat();
    dog1.sleep();
    dog1.setColor("red");

    //Calling members of the derived class
    dog1.bark();
    dog1.setType("mammal");

    //Using `getColor()` of dog1 as argument
    //getColor() returns string data
    dog1.displayInfo(dog1.getColor());

    return 0;
}