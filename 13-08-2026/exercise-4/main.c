#include <stdio.h>
#include <stdlib.h>

int main() {

  int vetor_lido[20], vetor_invertido[20], n, i;
  
  do
  {
    printf("Digite quantos números (máximo de 20 números) você deseja inserir no vetor: ");
    scanf("%d", &n);

    if (n <= 0 || n > 20) printf("Digite uma quantidade válida!");
  } while (n <= 0 || n > 20);

  int nCopy = n;

  for (i = 0; i < n; i++) {
    printf("Digite o número para a %dª posição: ", i+1);
    scanf("%d", &vetor_lido[i]);
  }

  printf("Vetor original: \n");
  for (i = 0; i < n; i++) {
    printf("%d ", vetor_lido[i]);
  }

  printf("\nVetor invertido: \n");
  for (i = 0; i < n; i++) {
    vetor_invertido[i] = vetor_lido[nCopy-1];
    nCopy--;
    printf("%d ", vetor_invertido[i]);
  }
  return 0;
}