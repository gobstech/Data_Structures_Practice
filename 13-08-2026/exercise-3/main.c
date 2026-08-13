#include <stdio.h>
#include <stdlib.h>

int main() {

  int vetor[15], n, i, qtdAcimaMedia = 0;
  float soma = 0, media = 0, percentual;

  do
  {
    printf("Digite uma quantidade de até 15 números para inserir no vetor: ");
    scanf("%d", &n);

    if (n <= 0 || n > 15) printf("Digite uma quantidade válida!\n");
  } while (n <= 0 || n > 15);

  for (i = 0; i < n; i++) {
    do
    {
      printf("Digite um número inteiro positivo para a %dª posição: ", i+1);
      scanf("%d", &vetor[i]);

      if (vetor[i] < 0) printf("Digite um número inteiro válido!\n");
    } while (vetor[i] < 0);
    
    soma += vetor[i];
  }

  media = soma/n;

  for (i = 0; i < n; i++) {
    if (vetor[i] > media) {
      qtdAcimaMedia++;
    }
  }

  percentual = ((float) qtdAcimaMedia/n)*100;
  printf("%.2f\n", percentual);

  printf("Média: %.2f\n", media);
  printf("Percentual de números abaixo da média: %.2f %%", percentual);

  return 0;
}