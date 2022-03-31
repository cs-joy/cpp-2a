#include <iostream>

using namespace std;

int main()  {
    char myword[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    //string literals
    char sj[] = "Hello";
    //without adding null character '\0'
    char test[] = {'H', 'e', 'l', 'l', 'o'};

    /*
     @arrays cannot be assigned values
    char testWord = "Bye";
    char myword = {'B', 'y', 'e', '\0'};
    */
    
    //it's right type of declare sting literals 
    char testWord[] = "Bye";

    cout << "myword[]: " << myword << " " << sizeof(myword) << endl;
    cout << "sj[]: " << sj << " " << sizeof(sj) << endl;
    //printed not right result
    cout << "test[]: " << test << " " << sizeof(test) << endl;
    //
    cout << "testWord[]: " << testWord << " " << sizeof(testWord) << endl;
/*
    char myWord[0] = {'B'};
    char myWord[1] = {'y'};
    char myWord[2] = {'e'};
    char myWord[3] = {'\0'};
    
    cout << "myWord[]: " << myWord << sizeof(myWord) << endl;
*/

    return 0;
}