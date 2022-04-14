#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> employees;

    employees.push_back("michael");
    employees.push_back("jim");
    employees.push_back("stoy");
    employees.push_back("doe");

    cout << "size of employees variable= " << employees.size() << "\n";

    return 0;
}