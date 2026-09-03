#include <stdio.h>
#include <stdlib.h>

int main() {

  int v[10], maior = 0, menor = 0;

  for (int i = 0; i < 10; i++) {
    printf("Digite o número que ocupará a %dª posição: ", i+1);
    scanf("%d", &v[i]);

    if (v[i] > v[maior]) {
      maior = i;
    }

    if (v[i] < v[menor]) {
      menor = i;
    }
  }

  printf("O maior valor do vetor é %d e encontra-se na %dª posição.\nO menor valor do vetor é %d e encontra-se na %dª posição.\n", v[maior], maior, v[menor], menor);
  
  return 0;
}