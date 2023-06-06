#include <iostream>
#include <stdlib.h>
#include <cstring>

#define SIZE 16

using namespace std;

int main() {
    char nums[SIZE];

    int i, j, k, len;

    cout << "Enter a binary number: ";
    gets(nums);
    len = strlen(nums);
    cout << len << endl;

    for(k=0; nums[k]!='\0'; k++) {
        if(nums[k]!='0' && nums[k]!='1') {
            cout << "\nIncorrect binary number format...the program will quit";

            exit(0);
        }
    }

    for(i=len-1; nums[i]!='1'; i--);
    for(j=i-1; j>=0; j--) {
        if(nums[j]=='1') {
            nums[j] = '0';
        } else {
            nums[j] = '1';
        }
    }

    cout << "\n2's Complement = " << nums;

    return 0;
}
