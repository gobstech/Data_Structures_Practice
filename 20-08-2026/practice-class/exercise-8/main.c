#include <stdio.h>
#include <stdlib.h>

void imprimir_numeros_pares(int n) {
  if (n >= 0) {
    imprimir_numeros_pares(n-2);
    printf("%d ", n);
  }
}

int main() {
  int n;
  do {
    printf("Digite um número par: ");
    scanf("%d", &n);

    if (n % 2 != 0) {
      printf("Digite um número par!\n");
    }
  } while (n % 2 != 0);

  imprimir_numeros_pares(n);
  return 0;
}