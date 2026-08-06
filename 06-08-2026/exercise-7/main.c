#include <stdio.h>
#include <stdlib.h>

int main() {

  double x, y, z;

  printf("Escreva dois números x e y para definir os extremos de um intervalo: \n");
  scanf("%lf %lf", &x, &y);

  printf("Intervalo: [%.2lf, %.2lf]\n", x, y);

  printf("Escreva um número z: ");
  scanf("%lf", &z);

  if (z >= x && z <= y) printf("O número %.2lf está contido no intervalo", z);
  else printf("O número %.2lf NÃO está contido no intervalo", z);

  return 0;
}