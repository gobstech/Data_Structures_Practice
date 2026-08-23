#include <stdio.h>
#include <stdlib.h>

void imprimirItens(int a, int b) {
  int inicio, fim;
  if (a < b) {
    inicio = a;
    fim = b;
  } else {
    inicio = b;
    fim = a;
  }
  printf("Números pares entre %d e %d: ", inicio, fim);
  for (inicio; inicio <= fim; inicio++) {
    if (inicio % 2 == 0) {
      printf("%d ", inicio);
    }
  }
}

int main() {
  int a, b;

  do {
    printf("Digite dois números inteiros: \n");
    scanf("%d %d", &a, &b);
    if (a == b) printf("Digite dois números diferentes!\n");
  } while (a == b);
  
  imprimirItens(a, b);
  return 0;
}