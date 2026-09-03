#include <stdio.h>
#include <stdlib.h>

typedef struct teste {
  int a;
  float b;
} Teste;

Teste* atribuir(int a, float b) {
  Teste *aux;
  aux = (Teste *) malloc(sizeof(Teste));
  aux->a = a;
  aux->b = b;
  return aux;
}

int main() {
  Teste *y;
  int a; 
  float b;
  scanf("%d %f", &a, &b);
  y = atribuir(a, b);
  printf("\n\n\ty->a = %d, y->b = %.2f", y->a, y->b);
  free(y);
  return 0;
}