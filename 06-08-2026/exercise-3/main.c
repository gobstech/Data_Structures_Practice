#include <stdio.h>
#include <stdlib.h>

int main() {

  double vel;
  
  do
  {
    printf("Digite o valor escalar de uma velocidade (em km/h) para obter o valor em m/s.\n");
    scanf("%lf", &vel);

    if (vel <= 0) printf("Digite um valor de velocidade válido!\n") ;
  } while (vel <= 0);
  
  printf("%.2lf km/h = %.2lf m/s", vel, vel/3.6);

  return 0;
}