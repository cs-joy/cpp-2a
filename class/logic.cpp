#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char arr[100];
    char frrr[100];
    char mrrr[100];

    cout << "enter father name: ";
    cin >> frrr;
    
    cout << "enter mother name: ";
    cin >> mrrr;

    cout << "enter your baby name: ";
    //cin >> arr;
    cin.ignore();
    cin.getline(arr, 100);
    

    if(!(tolower(arr[0]) == 's')){
       int frrrLast = strlen(frrr)-1;
       int mrrrLast = strlen(mrrr)-1;
       int arrLast = strlen(arr)-1;

       if(frrr[frrrLast] == arr[arrLast] || mrrr[mrrrLast] == arr[arrLast]){
        cout << "accepted";
       }else {
        cout << "not accepted";
       }
        
    } else {
        cout << "not accepted";
    }
    return 0;
}