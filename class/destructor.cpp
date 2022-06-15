#include <iostream>
using namespace std;

class myCats {

    int a;

    public:
    myCats(); //constructor
    ~myCats(); //destructor
    void display();
};

myCats::myCats(){
    cout << "In Constructor\n";
    a = 5;
}

myCats::~myCats(){
    cout << "Destructing...\n";
}

void myCats::display(){
    cout << "a= " << a << endl;
}

int main() {

    myCats obj;

    obj.display();

    return 0;
}