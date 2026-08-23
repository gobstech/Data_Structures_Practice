#include <stdio.h>
#include <stdlib.h>

int calcula_fatorial(int n) {
  int fatorial = 1;
  
  if (n == 0 || n == 1) {
    return 1;
  }

  while (n > 0) {
    fatorial *= n;
    n--;
  }
}

int main() {
  int a, b, c;
  do {
    printf("Digite três números inteiros positivos para calcular seu fatorial: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a < 0 || b < 0 || c < 0) {
      printf("Digite três número inteiros positivos!\n");
      system("pause");
      system("cls");
    }
  } while (a < 0 || b < 0 || c < 0);
  
  printf("O fatorial de %d é %d.\n", a, calcula_fatorial(a));
  printf("O fatorial de %d é %d.\n", b, calcula_fatorial(b));
  printf("O fatorial de %d é %d.\n", c, calcula_fatorial(c));

  return 0;
}