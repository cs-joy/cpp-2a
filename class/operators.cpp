#include <iostream>
using namespace std;

int main(){

    double num, num2, sub, div;
    int loop;
    cout << "loop ";
    cin >> loop;

    while(--loop){
        cout << "input first number: ";
        cin >> num;

        cout << "input second number:";
        cin >> num2;

        if (!(num > num2))
        {
            sub = num2 - num;
            cout << "subtraction of " << num2 << " and " << num << " is= " << sub << endl;
            div = num2 / num;
            cout << "division of " << num2 << " and " << num << " is= " << div << endl;
        }
        else
        {
            sub = num - num2;
            cout << "subtraction of " << num << " and " << num2 << " is= " << sub << endl;
            div = num / num2;
            cout << "division of " << num << " and " << num2 << " is= " << div << endl;
        }
    }

    

    return 0;
}