//illustrate Void Pointers

#include <bits/stdc++.h>
using namespace std;

void increase(void *data, int ptrsize) {
    if (ptrsize == sizeof(char)) {
        char *ptrchar;

        //Typecast data to a char pointer
        ptrchar = (char*)data;

        //Increase the char stored at *ptrchar by 1
        (*ptrchar)++;
        cout << "*data points to a char" << "\n";
    }
    else if (ptrsize == sizeof(int)) {
        int *ptrint;

        //Typecast data to a int pointer
        ptrint = (int*)data;

        //Increase the int stored at *ptrchar by 1
        (*ptrint)++;
        cout << "*data poins to an int" << endl;
    }
}

void js() {
    //Declare a character
    char c = 'x';

    //Declare an integer
    int i = 10;

    //Call increase function using a char and int address respectively
    increase(&c, sizeof(c));
    cout << "The new value of c is: " << c << endl;
    increase(&i, sizeof(i));
    cout << "The new value of i is: " << i << endl;
}

//Driver program
int main() {
    js();

    return 0;
}