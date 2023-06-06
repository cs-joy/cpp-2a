#include<iostream>

using namespace std;

void firstExample(void)
{
    /*
    (type-name) expression // c notation
    type-name (expression) // c++ notation
    */

    int num = 5, sum=23;
    float average = sum/(float) num; // type cast with c notation

    cout << average << endl;
}

void secondExmaple(void)
{
    int a=25, b= 33;
    float avg = float (b)/a; // type cast with c++ notation

    cout << avg << endl;
}

void _staticCastOperator(void)
{
    // static_cast<type> (object)

    int num = 10;
    double dbl = static_cast<double> (num);

    int c = 1;
    char ch = static_cast<char> (c);

    cout << num << endl << dbl << endl << ch << endl;
    cout << sizeof(num) << " bytes|> " << sizeof(dbl) << " bytes| " << sizeof(c) << " bytes|> " << sizeof(ch) << " bytes" << endl;
}

void _constCastOperator(void)
{
    // const_cast<type> (object)

    const int cst = 5;
    const int* pst = &cst;

    cout << *pst << " " << pst << endl;

    int* z = const_cast<int*> (pst);
    *z = 102;
    cout << *z << " " << z << endl;

    if(pst == z) 
    {
        cout << "location are same!\n";
    } else 
    {
        cout << "location are different\n";
    }
}

int main()
{
    //firstExample();
    //secondExmaple();
    
    //_staticCastOperator();
    _constCastOperator();

    return(0);
}