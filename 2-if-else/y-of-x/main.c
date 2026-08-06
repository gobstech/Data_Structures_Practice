#include <stdio.h>
#include <stdlib.h>

int main() {

  float x = 0;
  printf("Entre um número x:\n");
  scanf("%f", &x);

  if (x < 1) {
    printf("y = %.2f", x);
  } else if (x > 1) {
    printf("y = %.2f", x*x);
  } else {
    printf("y = 0");
  }

  return 0;
}