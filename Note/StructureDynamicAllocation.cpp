#include <iostream>

using namespace std;

int main() {
    struct student {
        char name[32]; //32 byte
        int roll;      //4 byte
        int marks[10];  //40 byte
    };                  // total 76 byte

    student p[1000]; //76000 byte
    int pc = 500; // 38000 byte

    student *q;    //4 byte for pointer
    int qc = 500;  //allocate bellow
    q = new student[qc];  //38000 byte

    student * r[1000]; //4000 bytes
    int rc = 500; //bellow loop allocate
    for(int i = 0; i < rc; ++i) {
        r[i] = new student; //total> 38000 byte
        cout << r[i] << endl;
    }

    return 0;
}