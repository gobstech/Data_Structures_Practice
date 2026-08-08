#include <stdio.h>
#include <stdlib.h>

int main() {

  int v[20], n = 0, i;

  do
  {
    printf("Enter how many numbers will you enter in the array: ");
    scanf("%d", &n);

    if (n <= 0) printf("Enter a valid length of array!\n");
  } while (n <= 0);

  printf("Enter each element of the array: \n");
  for (i = 0; i < n; i++) {
    printf("%d: ", i+1);
    scanf("%d", &v[i]);
  }

  printf("\n");
  printf("Array: \n");
  for (i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }

  printf("\n");
  printf("Inverted array: \n");
  for (i = (n-1); i >= 0; i--) {
    printf("%d ", v[i]);
  }

  return 0;
}