#include <stdio.h>



int main() {

    int find_max(int nums[], int len) {
3    //int max_num = nums[0];

4    for (int i = 1; i < len; i ++) {
5        if (nums[i] > max_num) {

6            max_num += nums[i];
         }
7    return max_num;
     }
8    }

    find_max(402, 3);

    return 0;

}
