#include<iostream>

using namespace std;

int main() {

    int arr[4] = {9, 2, 10, 3};
    int temp;

    for(int i=0; i<4-1; i++) {
        for(int j=0; j<4-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp=arr[0];
                arr[0]=arr[1];
                arr[1]=temp;
            }
        }
    }

    for(int i=0; i<4-1; i++) {
        for(int j=0; j<4-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp=arr[0];
                arr[0]=arr[1];
                arr[1]=temp;
            }
        }
    }

    for(int i=0; i<4; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;

    return 0;
}