#include <iostream>
#include <string>

using namespace std;

int main() {

    //Initializing 1st string
    string rjj = "Welcome to World Of Walker!";

    //declaring the 2nd string
    string jrr = "Walker rocks!";

    //declaring character array
    char sz[80];

    //using copy() to copy elements to char array
    //copies "Welcome"
    rjj.copy(sz, 7, 0);

    //displaying the char array

    return 0;
}