#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char test[3];

    cout << "test[3] ";
    gets(test);

    //cout << "test: " << test << endl;
    puts(test);

    string s = "Hi!";
    for(int i=0; i<3; i++)
    {
        cout << s[i] << endl;
    }

    return 0;
}