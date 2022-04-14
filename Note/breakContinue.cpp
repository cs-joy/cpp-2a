#include <iostream>

using namespace std;

int main() {

    //while
    int num;
    cout << "Please type a non-negative integer: ";
    cin >> num;
    /*
    while(num <=10) {
        cout << num << " \n";
        num--;

        if(num == 5) {
            break;
        }

    }
    */

    //do...while
    /*do {
        num--;
        if(num < 7) {
            break;
        }
        cout << "num= " << num << endl;
    } while(num <= 15);

    cout << "false~\n";

    */

   //for...if

   for(int i =0; i <= 1000; i++) {
       cout << num << "\n";
       num--;
       if(num < 5) {
           break;
       }
   }

   //s:: https://www.programiz.com/c-programming/c-break-continue-statement

    return 0;
}