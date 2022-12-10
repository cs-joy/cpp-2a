// ASCII codeS: https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
// ref :: https://www.youtube.com/watch?v=KyUTuwz_b7Q

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string arr[] = { "Bea", "Tim", "Leo", "Sam", "Mia", "Zoe", "Jan", "Lou", "Max", "Ada", "Ted" };
    
    // for "Mia" values find the index of the arr
    int a = 279;
    int b = 11;
    //cout << a % b << endl;
    
    // find out value
    int ASCII_total = 0;
    
    string name = "Ada";
    int sz = name.size();
    for(int i=0; i<sz; i++) {
        //cout << name[i] << "=" << (int) name[i] << " ";
        ASCII_total += (int) name[i];
    }
    //cout << ASCII_total << endl;
    
    // size of the actual array
    int number_of_elements_in_array = sizeof(arr) / sizeof (arr[0]);
    //cout << number_of_elements_in_array << endl;
    
    // find index of that element
    int index_of_the_specific_element = ASCII_total % number_of_elements_in_array;
    //cout << index_of_the_specific_element << endl;
    
    // try to print out the result if element is present in the arr
    if (index_of_the_specific_element){
        cout << arr[index_of_the_specific_element] << " at index " << index_of_the_specific_element  << endl;
    }
    else {
        cout << "not found";
    }

    return 0;
}
