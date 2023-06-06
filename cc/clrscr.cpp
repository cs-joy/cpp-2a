#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

int main()
{
    cout << "Press any key to clear the screen";
    getch();
    system("cls");

    cout << "This appears after clearing the screen.\n";
    cout << "Press any key to exit...\n";

    return(0);
}