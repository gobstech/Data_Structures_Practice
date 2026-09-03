#include <stdio.h>
#include <stdlib.h>

double soma_elementos_vetor(double v[], int i) {
  if (i >= 0) {
    return v[i] + soma_elementos_vetor(v, i-1);
  }
  return 0;
}

int main() {
  double v[10];
  int qtd;
  do {
    printf("Digite uma quantidade de até 10 itens a serem inseridas no vetor: ");
    scanf("%d", &qtd);
    
    if (qtd <= 0 || qtd >= 10) {
      printf("Digite um tamanho de vetor válido!\n");
      system("pause");
      system("cls");
    }
  } while (qtd <= 0 || qtd >= 10);

  for (int i = 0; i < qtd; i++) {
    printf("v[%d]: ", i);
    scanf("%lf", &v[i]);
  }

  printf("A soma dos itens desse vetor é: %.2lf", soma_elementos_vetor(v, qtd));
  
  return 0;
}