#include <iostream>
using namespace std;

void firstMessage(); //prototype

int main() {
    firstMessage();
    cout << "Hello jayScript!!" <<endl;
    firstMessage();

    return 0;
}

void firstMessage() {
    cout << "-----------------------" <<endl;
}