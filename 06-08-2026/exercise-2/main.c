#include <stdio.h>
#include <stdlib.h>

int main() {

  double valorDolares, cotacao;

  do {
    printf("Digite uma quantia em dólares e digite a cotacao do dia: \n");
    scanf("%lf %lf", &valorDolares, &cotacao);

    if (valorDolares <= 0) printf("Digite uma quantidade em dólares válida!\n");
  } while (valorDolares <= 0);

  printf("US$ %.2f = R$ %.2f.", valorDolares, (valorDolares*cotacao));

  return 0;
}