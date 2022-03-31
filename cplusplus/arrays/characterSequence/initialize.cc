#include <iostream>

using namespace std;

int main()  {
    char myword[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    //string literals
    char sj[] = "Hello";

    cout << "myword[]: " << myword << " " << sizeof(myword) << endl;
    cout << "sj[]: " << sj << " " << sizeof(sj) << endl;

    return 0;
}