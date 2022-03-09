#include <iostream>
using namespace std;

//C++ int
void intDetails() {
    cout << "--> Range Of Integer(int) Data Types <--\t-2147483648 to 2147483647" << endl;
    cout << "--> Size of \"int\" Data Types <--\t" << sizeof(int) << " bytes" << endl;
    //Assign integer variable
    int x = 2; // dataType varibable = value;
    cout << x << endl;
}

void floatDetails() {
    cout << "--> Range Of Integer(float) Data Types <--\t+/- 3.4e +/- 38 (~7 digits)" << endl; //source - https://iq.opengenus.org/fundamental-data-types-in-cpp/
    cout << "Size of \"float\" Data Types : \t" << sizeof(float) << " bytes" << endl;
    //Assign float variable
    float y = 4.34;
    cout << y << endl;
}

void doubleDetails(void) {
    cout << "hello void" << endl;
}

int main() {
    cout << "--------------------------------------------------------" << endl;
    cout << "----|_Size(in Bytes) Of C++ Fundamental Data Types_|----" << endl;
    cout << "--------------------------------------------------------" << endl;
    
    intDetails();
    cout << "2. Size of \"short int\" Data Types : " << sizeof(short int) << " bytes" << endl;
    cout << "3. Size of \"long int\" Data Types : " << sizeof(long int) << " bytes" << endl;
    cout << "4. Size of \"double\" Data Types : " << sizeof(double) << " bytes" << endl;
    
    cout << "6. Size of \"char\" Data Types : " << sizeof(char) << " bytes" << endl;
    cout << "7. Size of \"wchar_t\" Data Types : " << sizeof(wchar_t) << " bytes" << endl;
    cout << "8. Size of \"bool\" Data Types : " << sizeof(bool) << " bytes" << endl;
    cout << "9. Size of \"void\" Data Types : " << " The void keyword indicates an absence of data. It means \"nothing\" or \"no value\"" << endl;
    
    doubleDetails();

    return 0;
}