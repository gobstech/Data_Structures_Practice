#include <stdio.h>
#include <stdlib.h>

int main() {

  int n, isPrime = 1;

  do
  {
    printf("Digite um número inteiro e positivo para saber se ele é primo.\n");
    scanf("%d", &n);

    if (n <= 0) printf("Digite um número inteiro e positivo!\n");
  } while (n <= 0);

  if (n == 1) {
    printf("1 não é primo.");
    return 0;
  }

  for (int i = 2; i <= (n/2); i++) {
    if (n % i == 0) {
      isPrime = 0;
      break;
    }
  }

  if (isPrime) printf("%d é um número primo.\n", n);
  else printf("%d NÃO é um número primo.\n", n);

  return 0;
}