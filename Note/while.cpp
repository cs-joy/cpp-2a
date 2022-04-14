#include<iostream>

using namespace std;

int main() {
    int num=0;

    //while
    while(num <= 10) {
        cout << "num = " << num << endl;
        num++;
    }
    int b;

    //do...while
    do {
        
        cout <<"type a value: ";
        cin >> b;
        
        cout << "b= " << b << "\n";

    } while (b >= 0);
        cout << "bla= " << b << '\n';
        b++;
    

    return 0;
}