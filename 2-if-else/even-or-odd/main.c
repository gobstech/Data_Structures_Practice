#include <stdio.h>
#include <stdlib.h>

int main() {

  int a = 0;

  printf("Enter a number: \n");
  scanf("%d", &a);

  if (a % 2 == 0) {
    printf("Even");
  } else {
    printf("Odd");
  }

  return 0;
}