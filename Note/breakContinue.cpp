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

   //Ex01:: Program to calculate the sum of numbers (10 numbers max)
   //If the user enters a negative number, the loop terminates
   int number, sum=0;

   for(int i = 1; i <= 10; i++) {
       cout << "Enter number[" << i << " = ";
       cin >> number;
       
       //if the user enters a negative number, break the loop
       if(number < 0) {
           break;
       }
       
       sum += number; //sum = sum + number;
   }
   cout << "Sum = " << sum <<endl;


   //continue statement
   cout << "\n--continue statement--\n";
   int a;
   cout << "A= ";
   cin >> a;
   while(a < 10) {
       
       a++;
       if(a == 7) {
           continue;
       }
       cout << "aA= " << a << endl;
   }

   //do...while
   cout << "\ndo....while\n";
   int j;
   cout << "j= ";
   cin >> j;
   
   do {
       j++;
       if(j%2 == 0) {
           continue;
       }
       cout << "odd j= " << j << endl;
   } while(j < 100);

   //for
   cout << "\nfor\n";
   int k;
   cout << "k= ";
   cin >> k;
   for(int i=0; i < k; i++) {
       if(i%2 != 0) {
           continue;
       }
       cout << "even i=" << i << endl;
   }

    return 0;
}
