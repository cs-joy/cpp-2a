#include <iostream>
using namespace std;

int find_max(int num[], int len) {
    int i, max_num = num[0];
    
    for(i = 1; i < len; i++)
     if(num[i] > max_num) {
         max_num = num[i];
     }
    return max_num;
}

int main()
{
    int i,l;
    int arr[1000];
    cout << "l= " << endl;
    cin >> l;
    
    for(i = 0; i < l; i++) {
        cin >> arr[i];
    }
    
    
    int max= find_max(arr, l);
    cout<<max;

    return 0;
}
