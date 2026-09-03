#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  int info;
  struct no *prox;
} No;

typedef struct lista {
  No *inicio;
} Lista;

Lista* criar_Lista() {
  Lista* aux;
  aux = (Lista* ) malloc(sizeof(Lista));
  aux->inicio=NULL;
  return aux;
}

Lista* iniciar_lista() {
  return NULL;
}

No* aux_insere(No *antigo, int valor) {
  No *aux;
  aux = (No*) malloc(sizeof(No));
  aux->info = valor;
  aux->prox = antigo;
  return aux;
}

void insere_elemento_inicio(Lista *velho, int v) {
  velho->inicio = aux_insere(velho->inicio, v);
}

void remove_elemento_inicio(Lista *l) {
  No *aux;
  No *prox_aux;
  aux=l->inicio;
  
  if (aux != NULL) {
    l->inicio = aux->prox;
    prox_aux = aux;
    free(prox_aux);
  } else {
    printf("Não é possível remover itens. Lista está vazia.\n");
  }
}

void imprime_lista(Lista *l) {
  No *aux;
  aux=l->inicio;
  int info;

  if (aux != NULL) {
    while (aux != NULL) {
      info = aux->info;
      printf("%d ", info);
      aux=aux->prox;
    }
  } else {
    printf("Não é possível imprimir. Lista está vazia.");
  }

  printf("\n");
}

int buscar_elemento_lista(Lista *l, int n) {
  No *aux;
  aux=l->inicio;
  while (aux != NULL) {
    if (aux->info == n) {
      return 1;
    }
    aux=aux->prox;
  }
  return 0;
}

int verificar_lista_vazia(Lista *l) {
  No *aux;
  aux=l->inicio;

  if (aux != NULL) return 0;
  return 1;
}

int quantidade_elementos_lista(Lista *l) {
  int qtd = 0;
  No *aux;
  aux = l->inicio;
  while (aux != NULL) {
    qtd++;
    aux = aux->prox;
  }
  return qtd;
}

int somar_elementos_lista(Lista*l) {
  int soma = 0;
  No *aux;
  aux = l->inicio;
  while(aux != NULL) {
    soma += aux->info;
    aux = aux->prox;
  }

  return soma;
}

int main() {
  Lista *l;
  l = iniciar_lista();
  l = criar_Lista();
  int opcao = 0, cont = 1; // variavel continuar começa com 1, para entrar no programa

  while (cont) {
    do {
      printf("Digite uma das opções abaixo para a lista: \n");
      printf("0 - Sair do programa\n1 - Inserir um elemento no início da lista\n2 - Remover um elemento no início da lista\n3 - Imprimir a lista\n4 - Buscar um elemento na lista\n5 - Verificar se a lista está vazia\n6 - Verificar a quantidade de elementos da lista\n7 - Somar elementos da lista\nSua opção: ");
      
      scanf("%d", &opcao);
      
      if (opcao < 0 || opcao > 7) {
        system("cls");
        printf("Digite uma opção válida!\n");
        
        system("pause");
        system("cls");
      }

    } while (opcao < 0 || opcao > 7);

    switch (opcao) {
      case 1:
        int n;
        system("cls");
        printf("1 - Inserir um elemento no início da lista\nInsira em número inteiro na lista: ");
        scanf("%d", &n);
        insere_elemento_inicio(l, n);
        printf("Elemento inserido com sucesso!\n");
        system("pause");
        system("cls");
        break;
      case 2:
        system("cls");
        printf("2 - Remover o elemento no início da lista\n");
        remove_elemento_inicio(l);
        system("pause");
        system("cls");
        break;
      case 3:
        system("cls");
        printf("3 - Imprimir a lista\nImpressão da lista: ");
        imprime_lista(l);
        system("pause");
        system("cls");
        break;
      case 4:
        int num, retorno;
        system("cls");
        printf("4 - Buscar um elemento na lista\n");
        retorno = verificar_lista_vazia(l);
        if (retorno) {
          printf("Não é possível buscar um elemento na lista vazia.\n");
        } else {
          printf("Digite o elemento que deseja buscar na lista: ");
          scanf("%d", &num);
          retorno = buscar_elemento_lista(l, num);
          if (retorno) printf("Elemento %d está presente na lista!\n", num);
          else printf("Elemento %d não está presente na lista!\n", num);
        }
        system("pause");
        system("cls");
        break;
      case 5:
        int verificacao;
        system("cls");
        printf("5 - Verificar se a lista está vazia\n");
        verificacao = verificar_lista_vazia(l);
        if (verificacao) printf("Lista está vazia!\n");
        else printf("Lista não está vazia!\n");
        system("pause");
        system("cls");
        break;
      case 6:
        system("cls");
        printf("6 - Verificar a quantidade de elementos da lista\nA lista possui %d elementos.\n", quantidade_elementos_lista(l));
        system("pause");
        system("cls");
        break;
      case 7:
        system("cls");
        printf("7 - Somar elementos da lista\n");
        printf("A soma dos elementos da lista é %d.\n", somar_elementos_lista(l));
        system("pause");
        system("cls");
        break;
      case 0:
        exit(0);
        break;
    }
  }
  
  return 0; 
}