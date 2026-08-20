#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  int info;
  struct no *prox;
} No;

typedef struct lista {
  No *inicio;
} Lista;

Lista* inicializarLista() {
  return NULL;
}

Lista* criarLista() {
  Lista *aux;
  aux = (Lista *) malloc(sizeof(Lista));
  aux->inicio = NULL;
  return aux;
}

No* aux_insere(No *antigo, int v) {
  No *aux;
  aux = (No*) malloc(sizeof(No));
  aux->info = v;
  aux->prox = antigo;
  return aux;
}

void insereL_inicio(Lista *velho, int valor) {
  velho->inicio = aux_insere(velho->inicio, valor);
}

void imprimir_lista(Lista* l1) {
  No *aux;
  aux = l1->inicio;
  printf("Itens da lista encadeada: ");
  while (aux != NULL) {
    printf("%d ", aux->info);
    aux = aux->prox;
  }
}

int main() {
  Lista *l;
  l = inicializarLista();
  l = criarLista();
  insereL_inicio(l, 11);
  insereL_inicio(l, 10);
  insereL_inicio(l, 9);
  imprimir_lista(l);

  return 0;
}