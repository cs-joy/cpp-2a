#include <iostream>
//#include<conio.h>
using namespace std;

int main()
{
    int a[10],i,b=0,N=10; //declaration
    cout<<"Enter the array:\n"; //enter 10 number
    for(i=0;i<N;i++) //for loop to gather data
    {
      cin>>a[i]; //arrays of 10 integers
      if (a[i]>=10) //check whether the integers are greater or equal to 10
      b++; //in crement
    }

    cout<<"The number of integers greater or equal to 10 is: "<<b;
    getc();
}