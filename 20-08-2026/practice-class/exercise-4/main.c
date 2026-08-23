#include <stdio.h>
#include <stdlib.h>

int quantidade_digitos_numero_possui(int n) {
  if (n >= 10) {
    return 1 + quantidade_digitos_numero_possui(n/10);
  } 
  return 1;
}

int main() {
  int n;
  printf("Digite um número inteiro para descobrir quantos dígitos ele possui: ");
  scanf("%d", &n);
  printf("%d possui %d dígitos.", n, quantidade_digitos_numero_possui(n));
  return 0;
}