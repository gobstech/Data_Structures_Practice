#include <stdio.h>
#include <stdlib.h>

int main() {

  int v[10], greatest, least, i, pos_greatest, pos_least;

  printf("Enter each element of the 10 elements of the array: \n");
  for (i = 0; i < 10; i++) {
    printf("%d: ", i+1);
    scanf("%d", &v[i]);
    if (i == 0) {
      greatest = v[i];
      least = v[i];
    } else {
      if (v[i] > greatest) {
        greatest = v[i];
        pos_greatest = i;
      }
      if (v[i] < least) {
        least = v[i];
        pos_least = i;
      }
    }
  }

  printf("Greatest = %d (position in the array: %d)\nLeast element = %d (position in the array: %d)\n", greatest, pos_greatest, least, pos_least);
  return 0;
}