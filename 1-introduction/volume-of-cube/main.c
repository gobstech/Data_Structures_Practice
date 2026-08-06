#include <stdio.h>
#include <stdlib.h>
// #include <math.h>

int main() {

  float side = 0;
  float vol = 1;

  do {
    printf("Enter the side length of the cube to discover its volume:\n");
    scanf("%f", &side);

    if (side <= 0)
      printf("Enter a valid size length!\n");

  } while (side <= 0);

  // making it manually
  for (int i = 1; i <= 3; i++) {
    vol *= side;
  }

  // using the math.h lib
  // printf("The volume of a cube with side length %.2f is %.2f.", side, pow(side, 3));
  printf("The volume of a cube with side length %.2f is %.2f.", side, vol);

  return 0;
}