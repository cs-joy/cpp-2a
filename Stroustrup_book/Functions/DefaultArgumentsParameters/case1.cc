//no argument is passed

#include <iostream>

using namespace std;

//defining the default argument
void display(char = '*', int = 3);

int main() {

    int count = 5;
    
    cout << "No argument passed: " << endl;
    //*, 3 will be parameters
    display();

    cout << "First argument passed: " << endl;
    //#, 3 will be parameters
    display('#');

    cout << "Both arguments passed: " << endl;
    //$, 5 will be parameters
    display('$', count);

    return 0;
}

void display(char c, int count) {
    for(int i = 1; i <= count; i++) {
        cout << c;
    }
    cout << endl;
}
