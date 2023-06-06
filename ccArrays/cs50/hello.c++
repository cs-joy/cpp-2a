#include <iostream>
#include "cs50.h"

using namespace std;

string get_string(string var) {
    cout << var;

    string cname;
    getline(cin, cname);

    return cname;
}

int main() {

    cout << "Sum: " << sum(2, 3) << endl;

    string name = get_string("What's your name? ");
    cout << "hello, " << name;

    return 0;
}