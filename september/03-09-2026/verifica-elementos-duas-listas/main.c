#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  int info;
  struct no *prox;
} No;

typedef struct lista {
  No *inicio;
} Lista;

Lista* inicializa_lista() {
  return NULL;
}

Lista* criar_lista() {
  Lista *aux;
  aux = (Lista*) malloc(sizeof(Lista));
  aux->inicio = NULL;
  return aux;
}

int verifica_lista_vazia(Lista* l) {
  if (l != NULL) {
    if (l->inicio == NULL)
      return 1;
    else
      return 0;
  } else {
    printf("A lista não existe!");
    exit(1);
  }
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

void insere_elemento_qualquer_posicao(Lista* velho, int valor, int posicao) {
  velho->inicio = aux_insere_P(velho->inicio, valor, posicao);
}

int verifica_iguais(Lista *l1, Lista *l2) {
  No *aux1, *aux2;
  int cont = 0;

  aux1=l1->inicio;

  while(aux1 != NULL) {
    aux2=l2->inicio;
    while (aux2 != NULL) {
      if (aux1->info == aux2->info) {
        cont = 1;
        break;
      } else {
        cont = 0;
      }
      aux2 = aux2->prox;
    }
    if (!cont) {
      return 0;
    }
    aux1 = aux1->prox;
  }

  return 1;
}

Lista* liberar_lista(Lista *l) {
  No *aux;

  if (!verifica_lista_vazia(l)) {
    while(l->inicio != NULL) {
      aux=l->inicio;
      l->inicio = l->inicio->prox;
    }
    free(aux);
  } else {
    printf("Lista está vazia!");
    exit(1);
  }
  
  return NULL;
}

int main() {
  Lista *l1, *l2;
  l1 = inicializa_lista();
  l1 = criar_lista();
  insere_elemento_qualquer_posicao(l1, 2, 10);
  insere_elemento_qualquer_posicao(l1, 4, 10);
  insere_elemento_qualquer_posicao(l1, 3, 10);
  insere_elemento_qualquer_posicao(l1, 6, 10);
  
  l2 = inicializa_lista();
  l2 = criar_lista();
  insere_elemento_qualquer_posicao(l2, 4, 10);
  insere_elemento_qualquer_posicao(l2, 2, 10);
  insere_elemento_qualquer_posicao(l2, 6, 10);
  insere_elemento_qualquer_posicao(l2, 3, 10);

  printf("Resultado da verificação: %d", verifica_iguais(l1, l2));

  l1 = liberar_lista(l1);
  l2 = liberar_lista(l2);
  
  return 0;
}