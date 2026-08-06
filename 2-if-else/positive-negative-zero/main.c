#include <stdio.h>
#include <stdlib.h>

int main() {

  float a;
  printf("Enter a number: \n");
  scanf("%f", &a);

  if (a > 0) {
    printf("Positive");
  } else if (a < 0) {
    printf("Negative");
  } else {
    printf("Zero");
  }

  return 0;
}