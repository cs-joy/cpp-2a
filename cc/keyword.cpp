
// try catch

#include<iostream>
using namespace std;

class tryCatchException
{
    public:
    tryCatchException()
    {
        tryCatch();
    }

    void tryCatch()
    {
        try
        {
            int age = 0;
            if(age>=18)
            {
                cout << "Access granted - you are old enough.";
            } else
            {
                throw(age);
            }
        }
        catch(...) // "three dots" syntax (...) inside the catch block, which will handle any type of exception
        {
            cout << "Access denied - You must be at least 18 years old.\n";
        }
    }
};

int main()
{
    tryCatchException* tryObj = new tryCatchException();

    return 0;
}
