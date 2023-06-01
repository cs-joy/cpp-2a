#include <iostream>

using namespace std;

class Animal {
    private:
        string type;

    public:
        //constructor to initialize type
        Animal() : type("Animal") {}

        //declare virtual function
        virtual string getType() {
            return type;
        }
};

class Dog : public Animal {
    private:
        string type;

    public:
        //constructor to initialize type
        Dog() : type("Dog") {}

        string getType() override {
            return type;
        }
};

class Cat : public Animal {
    private:
        string type;

    public:
        //constructor to initialize type
        Cat() : type("Cat") {}

        string getType() override {
            return type;
        }
};

void print(Animal* ani) {
    cout << "Animal: " << ani-> getType() << endl;
}

int main() {

    // dynamically create objects using Animal pointers
    Animal* animal1 = new Animal();
    Animal* dog1 = new Dog();
    Animal* cat1 = new Cat();

    print(animal1);
    print(dog1);
    print(cat1);

    return 0;
};

//reference- https://www.programiz.com/cpp-programming/virtual-functions