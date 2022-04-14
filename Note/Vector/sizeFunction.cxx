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

    for(int j = 0; j < 3; j++) {
        cout << "grades[" << j << "] = {" << grades[j] << "}\n";
    }

    designBreak();

    return 0;
}