#include <iostream>

using namespace std;

void Arrays() {
    
}

int main() {
    string color, pluralNoun, celebrity;
    string test;

    

    cout << "enter a color: ";
    getline(cin, color);

    cout << "enter a plural noun: ";
    getline(cin, pluralNoun);

    cout << "enter a celebrity: ";
    getline(cin, celebrity);


    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    /*
    cout << "test: ";
    cin >> test;

    cout << test;
    */

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello " << name;

    return 0;
}