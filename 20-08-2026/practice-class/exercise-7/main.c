#include <stdio.h>
#include <stdlib.h>

int fib(int n) {
  if (n > 2) {
    return fib(n-1) + fib(n-2);
  }
  if (n > 0) {
    return 1;
  }
}

int main() {
  int n;
  do {
    printf("Digite uma posição válida para um número da sequência de Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) printf("Digite uma posição válida!");
  } while (n <= 0);

  printf("O número da %dª posição da sequência de Fibonacci é %d.", n, fib(n));
  return 0;
}