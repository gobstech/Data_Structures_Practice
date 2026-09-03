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

No* aux_insere(No* antigo, int v) {
  No* aux;
  aux = (No *) malloc(sizeof(No));
  aux->info = v;
  aux->prox = antigo;
  return aux;
}

void InsereL_inicio(Lista* velho, int valor) {
  velho->inicio = aux_insere(velho->inicio, valor);
}

int main() {
  Lista *l;
  l = inicializarLista();
  l = criarLista();
  InsereL_inicio(l, 9);
  InsereL_inicio(l, 10);

  return 0;
}

