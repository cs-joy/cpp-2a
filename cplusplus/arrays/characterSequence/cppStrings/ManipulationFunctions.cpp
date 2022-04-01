/*

copy(“char array”, len, pos) ->This function copies the substring in the target character array mentioned in its arguments. 
                               It takes 3 arguments, target char array, length to be copied, and starting position in the string to start copying.
swap()	-> This function swaps one string with other.

*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    //Initializing 1st string
    string rjj = "Welcome to World Of Walker!";

    //declaring the 2nd string
    string jrr = "Walker rocks!";

    cout << "Your first initializatio string is: " << rjj << endl;
    cout << "Your second initialization string is: " << jrr << endl;

    //declaring character array
    char sz[80];

    //using copy() to copy elements to char array
    //copies "Welcome"
    rjj.copy(sz, 7, 0);

    //displaying the char array
    cout << "The new copied character array is: " << sz << endl;

    //displaying string before swapping
    cout << "The first string before swapping is: " << rjj << endl;
    cout << "The second string before swapping is: " << jrr << endl;

    //using swap() to swap string content
    rjj.swap(jrr);

    //displaying string after swapping
    cout << "The first string after swapping is: " << rjj << endl;
    cout << "The second string after swapping is: " << jrr << endl;

    return 0;
}