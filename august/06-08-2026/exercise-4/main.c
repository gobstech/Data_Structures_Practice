#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  double alturaDegrau = 0, alturaSubida = 0;
  do {
    printf("Digite a altura de um degrau de uma escada e a altura que deseja subir para descobrir quantos degraus você deverá subir:\n");
    scanf("%lf %lf", &alturaDegrau, &alturaSubida);

    if (alturaDegrau <= 0 || alturaSubida <= 0) printf("Digite altura(s) válida(s)!\n");

  } while (alturaDegrau <= 0 || alturaSubida <= 0);

  printf("Altura do degrau = %.2lf u.m.\n", alturaDegrau);
  printf("Altura da subida = %.2lf u.m.\n", alturaSubida);
  printf("Você precisará subir %.2lf degraus.", ceil(alturaSubida/alturaDegrau));
}