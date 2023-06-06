#include<iostream>
#include<iomanip> // for setw()

using namespace std;

void firstExample(void)
{
    int m, n, p;

    m=2597;
    n=14;
    p=175;

    cout << "m = " << setw(5) << m << endl;
    cout << "n = " << setw(5) << n << endl;
    cout << "p = " << setw(5) << p << endl;
}

void secondExample(void)
{
    int Basic = 950, Allowance = 95, Total = Basic + Allowance;

    cout << setw(10) << "Basic" << setw(10) << Basic << endl << setw(10) << "Allowance" << setw(10) << Allowance << setw(10) << endl << "Total" << setw(10) << Total << endl;
}


int main()
{
    secondExample();

    return(0);
}