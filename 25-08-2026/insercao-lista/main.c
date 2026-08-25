#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  int info;
  struct no *prox;
} No;

typedef struct lista {
  No *inicio;
} Lista;

Lista* inicializaLista() {
  return NULL;
}

Lista* criarLista() {
  Lista* aux;
  aux = (Lista*) malloc(sizeof(Lista));
  aux->inicio = NULL;
  return aux;
}

No* aux_insere(No* antigo, int valor) {
  No *novo;
  novo = (No*) malloc(sizeof(No));
  novo->info = valor;
  novo->prox = antigo;
  return novo;
}

void insere_inicio(Lista* lista, int valor) {
  lista->inicio = aux_insere(lista->inicio, valor);
}

int main() {
  Lista *l;
  l = inicializaLista();
  l = criarLista();
  insere_inicio(l, 3);
  insere_inicio(l, 2);
  insere_inicio(l, 1);
  return 0;
}