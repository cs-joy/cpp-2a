//A Program to display marks of 5 students

#include <iostream>
using namespace std;

//declare function to display marks
//take 1d array as parameters
void resultDisplay(int rjs[5]) {
    cout << "Displaying marks: " << endl;

    //display array elements
    for(int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": " << rjs[i] << endl;
    }
}

int main() {

    //declare an initilaze array
    int marks[5] = {23, 45, 48, 79, 99};

    //call the display function
    //pass this array as an argument
    resultDisplay(marks);

    return 0;
}