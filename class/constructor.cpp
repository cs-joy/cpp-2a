#include <iostream>

using namespace std;

class myCar{
    int a;

  public:
    myCar(); //constructor
    void show();
};

myCar::myCar(){
    cout << "In Constructor\n";
    a = 10;
}

void myCar::show(){
    cout << "a= " << a;
}

int main() {

    myCar obj;
    obj.show();


    return 0;
}