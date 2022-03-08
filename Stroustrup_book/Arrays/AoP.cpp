#include <iostream>
using namespace std;

int main() {
   int srr[5] = {9, 6, 2, 8, 4};

   for (int i = 0; i < 5; i++ /* i++ = ++i */) {
      cout << "srr[" << i << "] - " << srr[i] << " " << endl;
   }

   return 0;
}