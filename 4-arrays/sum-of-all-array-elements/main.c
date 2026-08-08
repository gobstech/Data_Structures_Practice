#include <stdio.h>
#include <stdlib.h>

int main() {

  int x[20], n = 0, soma = 0, i;

  do
  {
    printf("Enter how many numbers will you enter in the array: ");
    scanf("%d", &n);

    if (n <= 0) printf("Enter a valid length of array!\n");
  } while (n <= 0);

  printf("Enter each array element: \n");
  for (i = 0; i < n; i++) {
    printf("%d: ", i+1);
    scanf("%d", &x[i]);
  }

  printf("\nArray: \n");
  for (i = 0; i < n; i++) {
    printf("%d ", x[i]);
    soma += x[i];
  }

  printf("\nSoma dos elementos do array: %d.", soma);
  return 0;
}