#include <stdio.h>
#include <stdlib.h>

int main() {
  float soma = 0;
  int i = 1;

  while (i <= 20) {
    soma += (float) i/(2*i + 1);
    i++;
  }

  printf("A soma da operação do problema é: %.2f", soma);
  return 0;
}