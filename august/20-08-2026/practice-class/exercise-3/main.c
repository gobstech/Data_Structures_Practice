#include <stdio.h>
#include <stdlib.h>

double ler() {
  double n;
  printf("Digite um número de ponto flutuante: ");
  scanf("%lf", &n);
  return n;
}

double soma_quadrados(double a, double b) {
  return a*a + b*b;
}

int main() {
  double a, b;
  a = ler();
  b = ler();
  printf("A soma dos quadrados de %.2lf e %.2lf é %.2lf.", a, b, soma_quadrados(a, b));
  return 0;
}