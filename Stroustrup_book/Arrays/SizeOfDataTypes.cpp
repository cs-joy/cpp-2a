#include <iostream>
using namespace std;

void designHeadline();

void DataTypes() {
    designHeadline();
    cout << "# Size of char : " << sizeof(char) << " bytes" << endl;
    cout << "# Size of int : " << sizeof(int) << " bytes" << endl;
    cout << "# Size of short int : " << sizeof(short int) << " bytes" << endl;
    cout << "# Size of long int : " << sizeof(long int) << " bytes" << endl;
    cout << "# Size of float : " << sizeof(float) << " bytes" << endl;
    cout << "# Size of double : " << sizeof(double) << " bytes" << endl;
    cout << "# Size of wchar_t : " << sizeof(wchar_t) << " bytes" << endl;
}

void designHeadline() {
    cout << "----|_Size Of C++ Data Types_|----" << endl;
}

int main() {
    DataTypes();

    return 0;
}

