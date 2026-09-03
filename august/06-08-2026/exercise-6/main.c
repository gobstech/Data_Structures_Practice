#include <stdio.h>
#include <stdlib.h>

int main() {

  int n, n_inv = 0, divisor = 100;

  do
  {
    printf("Digite um número inteiro entre 100 e 999 para invertê-lo: ");
    scanf("%d", &n);

    if (n < 100 || n > 999) printf("Digite um número no intervalo válido!\n");
  } while (n < 100 || n > 999);


  while (n >= 10) {
    n_inv += (n % 10) * divisor;
    n /= 10;
    divisor /= 10;
  }

  n_inv += n;

  if (n_inv > 10 && n_inv < 100) {
    printf("0%d", n_inv);
  } else if (n_inv < 10) {
    printf("00%d", n_inv);
  } else {
    printf("%d", n_inv);
  }
  
  return 0;
}