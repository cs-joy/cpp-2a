/*
Array Name as Pointers

An array name contains the address of first element of the array which acts like constant pointer. It means, the address stored in array name can’t be changed.
For example, if we have an array named val then val and &val[0] can be used interchangeably.
*/

#include <bits/stdc++.h>
using namespace std;
void jayScript() {
    //Declare an array
    int js[3] = {3, 5, 7};

    //declare pointer variable
    int *s;

    //assign the address of js[0] to s
    //We can use s=&js[0];(both are same)
    s = js;
    cout << "Elements of the array are: ";
    cout << s[0] << " " << s[1] << " " << s[2] << endl;
}

//Driver program
int main() {
    jayScript();
}