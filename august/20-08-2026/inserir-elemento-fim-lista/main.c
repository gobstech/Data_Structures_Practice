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

No* aux_insere_fim(No *antigo, int v) {
  No *novo, *aux;
  novo = (No*) malloc(sizeof(No));
  novo->info = v;
  novo->prox = NULL;

  if (antigo == NULL) {
    return novo;
  }

  aux = antigo;

  while(aux->prox != NULL) {
    aux=aux->prox;
  }

  aux->prox = novo;
  return antigo;
}

void insereL_fim(Lista *velho, int valor) {
  velho->inicio = aux_insere_fim(velho->inicio, valor);
}

void imprimir_lista(Lista* l1) {
  No *aux;
  aux = l1->inicio;
  printf("Itens da lista encadeada: ");
  while (aux != NULL) {
    printf("%d ", aux->info);
    aux = aux->prox;
  }
  printf("\n");
}

void remover_ultimo_item(Lista* l1) {
  No *aux;
  No *prev_aux;
  aux=l1->inicio;
  if (l1->inicio == NULL) {
    free(aux);
    l1->inicio=NULL;
    exit(0);
  }

  if (l1->inicio != NULL && l1->inicio->prox == NULL) {
    free(aux);
    l1->inicio=NULL;
    exit(0);
  }

  while (aux->prox != NULL) {
    prev_aux = aux;
    aux = aux->prox;
  }
  prev_aux->prox = NULL;
  free(aux);
}

void remover_primeiro_item_inserido(Lista *l1) {
  No *aux;
  No *prox_aux;
  aux=l1->inicio;
  if (l1 != NULL) {
    l1->inicio = aux->prox;
    prox_aux = aux;
    free(prox_aux);
  } else exit(0);
}

int main() {
  Lista *l;
  l = inicializarLista();
  l = criarLista();
  insereL_fim(l, 11);
  insereL_fim(l, 10);
  insereL_fim(l, 9);
  imprimir_lista(l);
  // remover_primeiro_item_inserido(l);
  // imprimir_lista(l);

  return 0;
}