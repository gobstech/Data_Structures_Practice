#include <stdio.h>
#include <stdlib.h>

int main() {

  for (int i = 100; i <= 500; i++) {
    if (i % 7 == 0) {
      printf("%d is a multiple of 7.\n", i);
      i += 6;
    }
  }


  return 0;
}