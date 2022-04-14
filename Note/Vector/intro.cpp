#include <iostream>
#include <vector>

using namespace std;

int main() {
    //Create a vector containing integers
    vector<int> v = {2, 4, 6 ,8, 10};

    //before using push_back()
    cout << "v= ";
    for(int i : v) {
        cout << i << " \n";
    }

    //Add two more integers to vector
    v.push_back(12);
    v.push_back(14);

    //print out the vector
    cout << "v = { ";
    for(int n : v) {
        cout << n << " ";
    }
    cout << "}\n";

    return 0;
}