#include <stdio.h>
#include <stdlib.h>

int main() {

  int n;
  double total = 0, valorIr;

  do {
    printf("Digite a quantidade de dias que o encanador trabalhará: ");
    scanf("%d", &n);

    if (n <= 0) printf("Digite uma quantidade válida de dias!\n");
  } while (n <= 0);
  
  total = n * 30;
  valorIr = 0.08*total;
  printf("Total: R$ %.2f\n", total);
  printf("Valor descontado do IR: R$ %.2f\n", valorIr);
  printf("Valor líquido: R$ %.2f", (total - valorIr));

  return 0;
}