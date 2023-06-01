#include <stdio.h>

#define VALUE 2;

int main() {

  for (int i = 0; i < 10;) {
    i += VALUE;
    printf("%d\n", i);
  }
  

  return 0;
}