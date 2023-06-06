#include<iostream>

using namespace std;

void allocation(void)
{
    int* p = new int;

    if(!p)
    {
        cout << "Allocation Failed" << endl;
    } else
    {
        cout << "Allocation Successfull" << endl;
    }
}

int main()
{
    int* ptr = new int(25);

    cout << "Address=" << ptr << endl;
    cout << "Value= "<< *ptr << endl;

    delete ptr;

    allocation();

    return(0);
}