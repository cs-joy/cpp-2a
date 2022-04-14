#include <iostream>

using namespace std;

int main() {
    cout << "Type : 1 to 10 : ";
    int a;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "One \n";
        break;
    case 2:
        cout << "Two \n";
        break;

    case 3:
        cout << "Three \n";
        break;

    case 4:
        cout << "Four \n";
        break;

    case 5:
        cout << "Five \n";
        break;
    
    case 6:
        cout << "Six \n";
        break;
    case 7:
        cout << "Seven \n";
        break;

    case 8:
        cout << "Eight \n";
        break;

    case 9:
        cout << "Nine \n";
        break;

    case 10:
        cout << "Ten \n";
        break;

    default:
        cout << "invalid input!\n";
        break;
    }

    return 0;
}