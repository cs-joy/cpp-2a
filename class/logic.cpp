#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char arr[100];
    char frrr[100];
    char mrrr[100];

    cout << "enter your name: ";
    cin >> frrr;
    
    cout << "enter your wife name: ";
    cin >> mrrr;

    cout << "enter your baby name: ";
    //cin >> arr;
    cin.ignore();
    cin.getline(arr, 100);
    

    if(!(tolower(arr[0]) == 's')){

       if(!(tolower(frrr[0]) == tolower(mrrr[0]))){

           int frrrLast = strlen(frrr) - 1;
           int mrrrLast = strlen(mrrr) - 1;
           int arrLast = strlen(arr) - 1;

           if (frrr[frrrLast] == arr[arrLast] || mrrr[mrrrLast] == arr[arrLast])
           {
               cout << "accepted";
           }
           else
           {
               cout << "not accepted";
           }
        }
        else 
        {
            cout << "not accepted because frr[0] and mrr[0] ar same";
        }
        
    } 
    else 
    {
        cout << "not accepted";
    }

    return 0;
}