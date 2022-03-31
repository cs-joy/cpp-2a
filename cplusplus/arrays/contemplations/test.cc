#include <iostream>
#include <cstdlib>
 
#define SIZE 4
 
using namespace std;
 
void getVal(int *x)
{
 
        for(int i=0; i<SIZE; i++)
        {
                cout<<endl<<"Please Enter Values of Array["<<i<<"] = ";
                cin>>x[i];
        }
}
 
int getSearchCriteria()
{
        int V;
 
        cout<<endl<<endl<<"Please enter the integer you want to find (V) = ";
        cin>>V;
 
        return V;
}
 
int searchArray(int *y,int s)
{
        int index;
        bool notFound = true;
 
        for(index = 0; notFound && index<SIZE; index++)
        {         
                if(y[index]==s)
                        notFound=false;                      
        }
 
        if (notFound)
        {
                cout<<endl<<"Element "<<s<<" is not found."<<endl;           
                index = 0;
        }
        else
        {
                cout<<endl<<"Element "<<s<<" is found at array["<<index-1<<"]"<<endl;
        }
 
 
        return index-1;
}
 
void deleteElement(int *z,int loc)
{
        for(int i=loc; i<SIZE; i++)
        {
                z[i]=z[i+1];
        }
 
        z[SIZE-1]=0;
}
 
void display(int *a)
{
        cout<<endl<<"Values of array : "<<endl;
 
        for(int i=0; i<SIZE; i++)
                cout<<endl<<*a++;
}
 
int main()
{
        int array[SIZE],V,location=-1;
        char choice;
        bool tryAgain=false;
 
        // get values for array[] from user
        getVal(array);
 
 
        do
        {
                // ask user the element to be searched for
                V=getSearchCriteria();
 
                // search V and report
                location = searchArray(array,V);
 
                if(location==-1)
                {
                        cout<<endl<<"Do you want to search again (Y/N) : ";
                        cin>>choice;
 
                        if(choice == 'Y' || choice == 'y')
                                tryAgain = true;
                        else
                                exit(0);
                }
                else
                        tryAgain= false;
        }while(tryAgain);
 
 
 
        // delete the element V
        deleteElement(array,location);
        cout<<endl<<"Element "<<V<<" at array["<<location<<"] is deleted!"<<endl;
 
        // diplay array;
        display(array);
 
        return 0;
}