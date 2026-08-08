#include <stdio.h>
#include <stdlib.h>

int main() {

  int x[20], y[20], n = 0, k = 0, i;
  
  do
  {
    printf("Enter how many numbers will you enter in the array: ");
    scanf("%d", &n);

    if (n <= 0) printf("Enter a valid length of array!\n");
  } while (n <= 0);

  printf("Enter a value for a multiplier: ");
  scanf("%d", &k);

  for (i = 0; i < n; i++) {
    printf("%d: ", i+1);
    scanf("%d", &x[i]);
  }

  printf("\n");

  printf("Array x: \n");
  for (i = 0; i < n; i++) {
    printf("%d ", x[i]);
  }

  printf("\n");

  printf("Array y: \n");
  for (i = 0; i < n; i++) {
    y[i] = k * x[i];
    printf("%d ", y[i]);
  }

  return 0;
}