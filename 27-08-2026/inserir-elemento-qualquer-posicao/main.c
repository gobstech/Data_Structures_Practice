#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  int info;
  struct no *prox;
} No;

typedef struct lista {
  No* inicio;
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

No* aux_insere_P(No *antigo, int valor, int pos) {
  int cont = 1;
  No* novo, *aux, *aux1;
  aux = NULL;
  aux1 = antigo;
  novo = (No*) malloc(sizeof(No));
  novo->info = valor;
  novo->prox = NULL;
  if (aux1 == NULL) {
    aux = novo;
    novo->prox = aux1;
    return novo;
  }

  while ((aux1!=NULL) && (cont < pos)) {
    aux = aux1;
    aux1 = aux1->prox;
    cont++;
  }

  if (aux == NULL) {
    antigo = novo;
    novo->prox = aux1;
    return antigo;
  }

  novo->prox = aux1;
  aux->prox = novo;
  return antigo;
}

void insere_valor_p(Lista *velho, int valor, int pos) {
  velho->inicio = aux_insere_P(velho->inicio, valor, pos);
}

void imprimir_lista(Lista* l) {
  No *aux;
  aux = l->inicio;
  while (aux != NULL) {
    printf("%d ", aux->info);
    aux = aux->prox;
  }
  printf("\n");
}

int main() {
  Lista *l;
  l = inicializaLista();
  l = criarLista();
  insere_valor_p(l, 10, 10);
  insere_valor_p(l, 15, 1);
  insere_valor_p(l, 20, 2);
  insere_valor_p(l, 25, 9);
  imprimir_lista(l);
  return 0;
}