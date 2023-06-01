#include <iostream>
using namespace std;

class Room {
    private:
    double length;
    double breadth;
    double height;
    
    public:

    //function to initialize private variables
    void initData(double len, double brth, double hgt) {
        length = len;
        breadth = brth;
        height = hgt;
    }

    //member functions
    double calculateArea() {
        return length * breadth;
    }
    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {

    //create object
    Room room1, room2;

    //assign value with `initData()` parameter
    room1.initData(2, 3, 4);

    /* 
                      data members are inaccessible becasue of `private`
    room2.length = 4;
    room2.breadth = 7;
    room2.height = 5;
    */

    cout << "Area of Room(room1) =  " << room1.calculateArea() << endl;
    cout << "Volume of Room(room1) =  " << room1.calculateVolume() << endl;

    return 0;
}