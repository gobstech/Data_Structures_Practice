#include <stdio.h>
#include <stdlib.h>
#include "./PILHA_INCOMPLETA.h"

int main() {
  Pilha *p;
  int opcao = 0;
  p = CriaPilha();

  while (1) {
    system("cls");
    printf("\n0 => Sair\n1 => Inserir item na pilha\n2 => Remover item na pilha\n3 => Imprimir pilha\n4 => Verificar se pilha está vazia\n5 => Liberar pilha\nSua opção: ");
    scanf("%d", &opcao);
    switch (opcao) {
      case 0: 
        system("cls");
        printf("Até mais!\n");
        exit(0);
        break;
      case 1: 
        system("cls");
        printf("1 => Inserir item na pilha\n");
        ler_inserir_item(p);
        system("pause");
        break;
      case 2: 
        system("cls");
        printf("2 => Remover item na pilha\n");
        int removido = pop(p);
        printf("Elemento %d foi removido da pilha!\n", removido);
        system("pause");
        break;
      case 3: 
        system("cls");
        printf("3 => Imprimir pilha\n");
        imprime(p);
        system("pause");
        break;
      case 4: 
        system("cls");
        printf("4 => Verificar se pilha está vazia\n");
        if (vaziaPilha(p)) printf("Pilha está vazia!\n");
        else printf("Pilha não está vazia!\n");
        system("pause");
        break;
      case 5: 
        system("cls");
        printf("5 => Liberar pilha\n");
        p = liberaPilha(p);
        printf("Pilha liberada!\n");
        system("pause");
        break;
      default:
        system("cls");
        printf("Opção inválida!\n");
        system("pause");
    }
  }
  
  return 0;
}