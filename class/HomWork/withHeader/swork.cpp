#include <iostream>
#include "calClass.hpp"

using namespace std;

int main() {
    int x, y, z;

    cout << "x= ";
    cin >> x;
    cout << "y= ";
    cin >> y;
    cout << "z= ";
    cin >> z;

    calClass obj, obj2;

    obj.myFunction(x, y, z);
    if(z < 5 && z > 1 ){
        obj.display();
    }

    return 0;
}