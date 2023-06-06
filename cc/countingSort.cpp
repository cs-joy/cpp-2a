#include<iostream>

using namespace std;

void countingSort(int arr[], int n)
{
    int counter[10];
    int out[10];
    int maxValue=arr[0];

    // find out largest element of arr
    for(int i=0; i<n; i++)
    {
        if(arr[i]>maxValue)
        {
            maxValue = arr[i];
        }
    }

    //initialize a new array with all zeros.
    for(int i=0; i<=maxValue; i++)
    {
        counter[i] = 0;
    }

    //  Store the count of each element
    for(int i=0; i<n; i++)
    {
        counter[arr[i]]++;
    }

    // Store the cumulative count of each array
    for(int i=1; i<=maxValue; i++)
    {
        counter[i] += counter[i-1];
    }

    //Find the index of each element of the original array in count array, and
    // place the elements in output array
    for(int i= n-1; i>=0; i--)
    {
        out[counter[arr[i]]-1] = arr[i];
        counter[arr[i]]--;
    }

    // copy the sorted elements to original arr
    for(int i=0; i<n; i++)
    {
        arr[i] = out[i];
    }
}

void printArray(int ar[], int sz)
{
    for(int j=0; j< sz; j++)
    {
        cout << ar[j] << " ";
    }
    cout << endl;
}

int main()
{
    int numbers[] = {2, 5, 9, 11, 7, 3, 7, 5, 2};
    int numSize = sizeof(numbers)/sizeof(numbers[0]);

    countingSort(numbers, numSize);
    printArray(numbers, numSize);

    return(0);
}
