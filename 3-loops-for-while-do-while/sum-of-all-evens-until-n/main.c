#include <stdio.h>
#include <stdlib.h>

int main() {

  int n, soma = 0;

  do {
    printf("Enter an integer greater than 1: ");
    scanf("%d", &n);

    if (n <= 1) printf("\nPrint valid integer!\n");

  } while (n <= 1);

  for (int i = 2; i <= n; i += 2) {
    soma += i;
  }

  printf("A soma de todos os números pares até %d é %d.", n, soma);

  return 0;
}