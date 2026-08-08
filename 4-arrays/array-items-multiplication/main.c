#include <stdio.h>
#include <stdlib.h>

int main() {

  int x[20], y[20], z[20], n = 0, i = 0;

  do
  {
    printf("Enter how many numbers will you enter in each array: ");
    scanf("%d", &n);

    if (n <= 0) printf("Enter a valid length of array!\n");
  } while (n <= 0);
  
  printf("Enter each number in each position in array x: \n");
  for (i = 0; i < n; i++) {
    printf("%d: ", i+1);
    scanf("%d", &x[i]);
  }

  printf("Enter each number in each position in array y: \n");
  for (i = 0; i < n; i++) {
    printf("%d: ", i+1);
    scanf("%d", &y[i]);
  }
  
  printf("Array x:\n");
  for (i = 0; i < n; i++) {
    printf("%d ", x[i]);
  }

  printf("\n");

  printf("Array y:\n");
  for (i = 0; i < n; i++) {
    printf("%d ", y[i]);
  }

  printf("\n");

  printf("Array z:\n");
  for (i = 0; i < n; i++) {
    z[i] = x[i] * y[i];
    printf("%d ", z[i]);
  }

  return 0;
}