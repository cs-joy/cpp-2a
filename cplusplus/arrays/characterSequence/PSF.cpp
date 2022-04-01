// Passing String to a Function

#include <iostream>

using namespace std;

void display(char *);
void display(string);

int main() {
    string rjs;
    char rzs[100];

    cout << "Enter a string: ";
    getline(cin, rjs);

    cout << "Enter another string: ";
    cin.get(rzs, 100);

    display(rjs);
    display(rzs);

    return 0;
}

void display(char sr[]) {
    cout << "Entered a char array is: " << sr << endl;
}

void display(string jr) {
    cout << "Entered a string is: " << jr << endl;
}