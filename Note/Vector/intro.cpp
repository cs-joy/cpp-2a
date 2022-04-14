#include <iostream>
#include <vector>

using namespace std;

int main() {
    //Create a vector containing integers
    vector<int> v = {2, 4, 6 ,8, 10};

    //access element
    cout << "v[0] = {" << v[0] << "}\n";

    cout << "\n-------------\n";
    //testLoop
    for(int i = 0; i < 5; i++) {
        cout << "v[" << i << "] = {" << v[i] << "}\n";
    }

    cout << "\n-------------\n";

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