#include <iostream>

using namespace std;

class Room {
    public:
    //data members
    double length;
    double breadth;
    double height;

    //member functions
    double calculateArea() {
        return length * breadth;
    }
    double calculateVolume() {
        return length * breadth * height;
    }
};

void SampleFunction() {
    //create object
    Room room1, room2;

    //access data members and member functions

    //data members for room1
    room1.length = 5;
    room1.breadth = 5;
    room1.height = 3.94;

    //data members for room2
    room2.length = 6.25;
    room2.breadth = 3.75;
    room2.height = 8.45;

    //member function for room1
    cout << "Area of room1= " << room1.calculateArea() << endl;
    cout << "Volume of room1= " << room1.calculateVolume() << endl;
    cout << "\n----------\n";
    //member function for room2
    cout << "Area of room2= " << room2.calculateArea() << endl;
    cout << "Volume of room2= " << room2.calculateVolume() << endl;

};

int main() {

    //c++ object- `className objectVariableName`
    //create object
    Room room3, room4;
    //access data members and member functions

    //data members for room3
    room3.length = 2;
    room3.breadth = 3;
    room3.height = 6.68;

    //data members for room4
    room4.length = 4;
    room4.breadth = 3.5;
    room4.height = 2.8;

    //member function for room4
    cout << "Area of room3= " << room3.calculateArea() << endl;
    cout << "Volume of room3= " << room3.calculateVolume() << endl;
    cout << "\n----------\n";
    //member function for room4
    cout << "Area of room4= " << room4.calculateArea() << endl;
    cout << "Volume of room4= " << room4.calculateVolume() << endl;

    cout << "\n--Sample Functions Ouput--\n";
    SampleFunction();

    return 0;
}