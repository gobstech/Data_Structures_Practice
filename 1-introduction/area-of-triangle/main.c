#include <stdio.h>
#include <stdlib.h>

int main() {

  float base = 0, height = 0;

  do {
    printf("Enter the triangle's base and height values: \n");
    scanf("%f", &base);
    scanf("%f", &height);

    if (base <= 0 || height <= 0) {
      printf("Enter valid numbers!\n");
    }
  } while (base <= 0 || height <= 0);

  printf("The area of a triangle with base %.2f and height %.2f is: %.2f a.u.", base, height, base*height*0.5);

  return 0;
}