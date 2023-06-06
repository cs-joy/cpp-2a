#include <iostream>

using namespace std;

template<class X>
void swapping(X &a, X &b)
{
    X temp;
    temp = a;
    a = b;
    b = temp;
}

template<class T>
void bubbleSort(T arr[], int n)
{
    int va, vb;
    for(int i=0; i<n-1; i++)
    {
        for(int j=n-1; j>i; j++)
        {
            if(arr[j] < arr[j-1])
            {
                swapping(arr[j], arr[j-1]);
            }
        }
    }
}




int main() {
    int ary[10] = {3, 8, 1, 4, 2, 9, 5, 7, 10, 6};
    bubbleSort(ary, 10);

    cout << "Sorted Array: " << endl;
    for(int i=0; i<10; i++)
    {
        cout << ary[i] << " ";
    }
    cout << endl;

    return 0;
}
