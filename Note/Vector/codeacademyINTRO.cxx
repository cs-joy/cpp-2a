#include <iostream>
#include <vector>
#include <string>

using namespace std;

void designBreak() {
    cout << "->->->->-\n";
}

int main() {
    vector<string> employees;

    employees.push_back("michael");
    employees.push_back("jim");
    employees.push_back("stoy");
    employees.push_back("doe");

    cout << "size of employees variable= " << employees.size() << "\n";

    designBreak();

    vector<int> grades(3);
    grades[0] = 79;
    grades[1] = 89;
    grades[2] = 99;

    for(int j = 0; j < grades.size(); j++) {
        cout << "grades[" << j << "] = {" << grades[j] << "}\n";
    }

    designBreak();

    cout << "using pop_back() function\n";
    //.pop_back() to remove an element from the “end” of a vector
    grades.pop_back();
    for(int j = 0; j < grades.size(); j++) {
        cout << "grades[" << j << "] = {" << grades[j] << "}\n";
    }
    cout << "removed " << grades[2] << " element at grades[2] position\n";

    designBreak();

    cout << "using push_back() function\n";
    //.push_back() to add an element to the “end” of a vector
    grades.push_back(85);
    for(int j = 0; j < grades.size(); j++) {
        cout << "grades[" << j << "] = {" << grades[j] << "}\n";
    }
    cout << "add " << grades[2] << " element at grades[2] position\n";


    return 0;
}