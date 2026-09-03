#include <stdio.h>
#include <stdlib.h>

#define ERRO_LISTA_NAO_EXISTE 1 

typedef struct no {
  int info;
  struct no *prox;
} No;

typedef struct pilha {
  struct no *Topo;
} Pilha;

int verifica_pilha_vazia(Pilha *p) {
  if (p != NULL) {
    if (p->Topo == NULL) {
      return 1;
    }
    return 0;
  }
  printf("ERRO!");
  exit(ERRO_LISTA_NAO_EXISTE);
}

void imprime_pilha(Pilha *p) {
  No *aux;
  if (!verifica_pilha_vazia(p)) {
    aux = p->Topo;
    while(aux != NULL) {
      printf("%d ", aux->info);
      aux = aux->prox;
    }
    printf("\n");
  } else {
    printf("Lista vazia");
  }
}

Pilha* liberar_pilha(Pilha *p) {
  No *aux;
  if (!verifica_pilha_vazia(p)) {
    while (p->Topo != NULL) {
      aux = p->Topo;
      p->Topo = p->Topo->prox;
      free(aux);
    }
  } else {
    printf("Lista está vazia.");
  }
  free(p);
  return NULL;
}
