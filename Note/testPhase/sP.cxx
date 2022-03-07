#include <iostream>
using namespace std;
void breakLine(), secMain();

//declaration global variable
int sVar;
int sVar2 = 2; //explicit initialization
char s = 'S';
char j('j');

int main() {
    //Local variable declaration
    int jayScript = 4;
    float jF(2.4);
    char js('r');

    //output of that program
    breakLine();
    cout << "Local variable" <<endl;
    breakLine();
    cout << "1. the value of (jayScript) variable-\t = " <<  jayScript <<endl;
    cout << "2. the value of (jF) variable-\t = " << jF << endl ;
    cout << "3. the value of (js) variable-\t = " << js << endl <<endl;
    breakLine();
    cout << "Global Variable" <<endl;
    breakLine();
    cout << "1. the value of (sVar) variable-\t = " <<  sVar << endl;
    cout << "2. the value of (sVar2) variable-\t = " << sVar2 << endl;
    cout << "3.the value of (s) variable-\t = " << s << endl;
    cout << "4. the value of (j) variable-\t = " << j <<endl; 

    return 0;
}

void breakLine() {
    cout << "---------------" <<endl;
    cout << s ;
    cout << j ;
}