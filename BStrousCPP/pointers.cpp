#include <iostream>
#include <string>
using namespace std;

//copying ten elements from one array to another

void copyArray() {

    int v1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int v2[10];

    for (auto i=0; i!=10; ++i) {
        v2[i] = v1[i];
        cout << "v1[ " << i << " ]= " << v1[i] << "\t" << "v2[ " << i << " ]= " << v2[i] << endl;
    }

}

void print() {

    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto x:v) {
        cout << "x= " << x << "\t";
    }

    for (auto x: {10, 21, 32, 43, 54, 65}) {
        cout << "\nx'= " << x << '\t';
    }

}

void Increament() {

    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto& x: v) {
        ++x;
        
        cout << "\n\nx= " << x << '\t' << endl;
    }

}

void pointerArr() {

    char arr[6] = {'A', 'J', 'R', 'S', 'I', 'E'};

    char* p = &arr[3];
    char y = *p;

    char* v;

    char j[] = {'g', 'r'};
    char* b = j;


    cout << "Array- " << arr[1] << arr[2] << endl;

    cout << "Pointer- " << &v << '\t' << &b << '\t' << endl;

    cout << "PointerTOarray- " << y << endl;


}

int count_x(char* p, char x) {
    if (p==nullptr) {
        return 0;
    }
    int count = 0;
    while(p) {
        if (*p==x) {
            ++count;
        }
        ++p;
    }
    return count;
}

bool accept() {
    cout << "Do you want to proceed (y or n)?\n";

    char answer = 0;
    cin >> answer;

    if (answer == 'y') {
        return true;
        
    }

    return false;
}

//switch
bool accept2() {
    cout << "Do you want to proceed (y or no)?\n";

    char answer = 0;
    cin >> answer;

    switch (answer) {
        case 'y':
        return true;
        case 'n':
          return false;
        
        default:
          cout << "I'll take that for a no.\n";
          return false;
    }
}

void pointerIntro() {
    int* pi;
    char** ppc;

    int* ap[15]; //array of 15 pointers to ints

    int (*fp) (char*); //pointer to function taking a char* argument; returns an int

    int* f(char*); //function taking a char* argument; returns a pointer to int

    char r = 'j';
    char* s = &r; //s holds the address of r
    char r2 = *s; //r2 == 'j'



    cout << "(pointer to int) pi= " << pi << endl ;
    cout << "(pointer to pointer to char) ppc= " << ppc << endl;
    cout << "(array of 15 pointers to ints) ap = " << ap << endl;
    
    cout << "fp = " << fp << endl;
    cout << "f= " << f << endl;

    cout << "r2= " << r2  << endl;
}

void pointerArray() {
    char w[3] = {'a', 'b', 'c'};
    char* w1[3];
    char* w2[32];

    char* y[32];

    char* z;

    cout << "w= " << w << endl;
    cout << "w1= " << w1 << endl;
    cout << "w2= " << w2 << endl;
    cout << "y= " << y << endl;
}

int main() {

    copyArray();

    print();

    Increament();

    pointerArr();

    cout << endl;
    accept();
    
    cout << endl;
    accept2();

    cout << endl;
    pointerIntro();

    cout << endl;
    pointerArray();

    return 0;
}