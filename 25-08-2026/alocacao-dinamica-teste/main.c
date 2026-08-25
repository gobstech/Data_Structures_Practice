#include <stdio.h>
#include <stdlib.h>

typedef struct teste {
  int a;
  float b;
} Teste;


int main() {
  Teste *y;
  y = (Teste *) malloc(sizeof(Teste));
  y->a=5;
  y->b=2.5;
  printf("\n\n\ty->a = %d, y->b = %.2f\n\n\t", y->a, y->b);
  free(y);
  return 0;
}