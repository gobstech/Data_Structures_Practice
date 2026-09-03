#include <stdio.h>
#include <stdlib.h>

float pot(float x, int n) {
  if (n > 0) {
    return x*pot(x, n-1);
  }
  if (n < 0) {
    return (1/x)*pot(x, n+1);
  }
  return 1;
}

int main() {
  float base;
  int potencia;

  printf("Digite a base e a potência: ");
  scanf("%f %d", &base, &potencia);

  printf("%.3f^%d = %.5f\n", base, potencia, pot(base, potencia));
  return 0;
}