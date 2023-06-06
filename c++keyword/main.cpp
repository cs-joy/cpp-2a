#include <iostream>

using namespace std;

void SizeOfDataType() {
    cout << "Size Of- int(8)>" << sizeof(int8_t) << " bytes" << endl;
    cout << "Size Of- int(16)>" << sizeof(int16_t) << " bytes" << endl;
    cout << "Size Of- int(32)>" << sizeof(int32_t) << " bytes" << endl;
    cout << "Size Of- int(64)>" << sizeof(int64_t) << " bytes" << endl;
}

void Keyword() {
    typedef int length;
    typedef double height;
    height h1;
    cout << "size of length variable- " << sizeof(length) << endl;
    cout << "size of h1 variable- " << sizeof(h1) << endl;

    cout << "Documentation Use" << endl;
    typedef int km_per_hour;
    typedef int points;

    km_per_hour current_speed;
    points heigh_score = 67;
    points myScore = 65;

    if(myScore > heigh_score) {
        cout << "You are up!" << endl;
    }
}

typedef struct student {
    string name;
    int age, role;
}stud;

typedef struct myStruct {
    int data1;
    char data2;
} mS;

typedef struct {
    int dS1;
    char dS2;
    double S2;
}jS;

void INTRO() {
    cout << "-------\n";

    stud a;



    cout << "Name: ";
    getline(cin, a.name);

    cout << "Age : ";
    cin >> a.age;

    cout << "Role: ";
    cin >> a.role;

    //display result
    cout << "Name: " << a.name << endl;
    cout << "Role Number: " << a.role << endl;
    cout << "Age: " << a.age << " years" << endl;

    cout << "myStruct>mS" << endl;
    mS a1;
    cout << "data1: ";
    cin >> a1.data1;
    cout << "data1: " << a1.data1 << endl;

    cout << "----jS----" << endl;
    jS js1;
    cout << "data1: ";
    cin >> js1.dS1;
    cout << "data1: " << js1.dS1 << endl;
}

void Pointers() {
    typedef int* int_ptr;
    int_ptr ptr;
    // Same as:
    // int *ptr;
    int a=5;
    ptr = &a;

    cout << "address= " << ptr << endl;
    cout << "value= " << *ptr << endl;
}

void ConstantPointers() {
    typedef int *intptr;
    const intptr ptr = NULL;
    //Same as:
    // int *const ptr = NULL;
    cout << "*ptr= " << ptr << endl;
}

int main()
{
    cout << "----------------" << endl;
    //Keyword();

    //INTRO();

    //Pointers();

    //ConstantPointers();


    return 0;
}
