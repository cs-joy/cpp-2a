#include <iostream>
#include <vector>

using namespace std;

int main()
{
    try {
        cout << "Create a vector size 5..";
        vector<int> v(5);
        cout << "\nAccessing the 11th element of the vector...";
        v.at(10);
    }
    catch (const exception& e) {
        cout << "\na standard exception was caught, with message \n'" << e.what() << "'\n";
    }

    return 0;
}
