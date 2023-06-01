#include <iostream>

using namespace std;

class Wall {
    private:
        double length;
        double height;

    public:
        Wall(double len, double hgt) {
            length = len;
            height = hgt;
        }
        double calculateArea() {
            return length * height;
        }
};

class Room {
    private:
        double length;
        double breadth;
        double height;

    public:
        Room(double len, double brth, double hgt) {
            length = len;
            breadth = brth;
            height = hgt;
        }

        //copy constructor with a Room object as a parameter
        //copies data of the obj parameter
        Room(Room &obj) {
            length = obj.length;
            breadth = obj.breadth;
            height = obj.height;
        }

        double calculateArea() {
            return length * height;
        }
        double calculateVolume() {
            return length * height * breadth;
        }
};

int main() {
    
    Wall wall1(2.36, 5.64);
    Wall wall2(3.94, 9.21);

    cout << "Area of wall1 = " << wall1.calculateArea() << endl;
    cout << "Area of wall2 = " << wall2.calculateArea() << endl;

    //create an object of Room class
    Room room1(4.67, 5.78, 2.49);

    //copy contents of room1 to room2
    Room room2 = room1;

    //print out result
    cout << "Area of Room(room1) = " << room1.calculateArea() << endl;
    cout << "Volume of Room(room1) = " << room1.calculateVolume() << endl;
    cout << "-------------------------------\n";
    cout << "Area of Room(room2) = " << room2.calculateArea() << endl;
    cout << "Volume of Room(room2) = " << room2.calculateVolume() << endl;

    return 0;
}