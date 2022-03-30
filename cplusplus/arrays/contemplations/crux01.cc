#include <iostream>

using namespace std;

int main() {

    int srr[10];
    cout << "Enter Ten Integers: " << endl;
    for(int n = 0; n < 10; n++) {
        cin >> srr[n];
    }

    for(int n = 0; n < 10; n++) {
        cout <<"srr["<<n<<"] = :"<<srr[n]<<endl;
    }

    cout << "which element you want to search: " << endl;
    int value, position=0, count=0;
    cin >> value;
    for(int n = 0; n < 10; n++) {

        count++;
        if(srr[n] == value) { 
           
            
            position=n;

            break;
            
        }
    }
    
     cout<<"element fount at positon : "<<position <<  "\n-number of count times the item is found. " << count <<endl;
    return 0;
}