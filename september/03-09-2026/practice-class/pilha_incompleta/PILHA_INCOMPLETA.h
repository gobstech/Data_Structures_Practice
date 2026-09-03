#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

/* FUN��ES DE MANIPULA��O DE PILHA

Pilha* CriaPilha ()               CRIA A PILHA

No* ins_ini (No* t, int a)        AUXILIAR DA INSER��O

void push (Pilha* p, int v)       INSER��O

No* ret_ini (No* l)               AUXILIAR DA REMO��O

int pop (Pilha* p)                 REMOVE RETORNANDO O VALOR QUE FOI REMOVIDO

Pilha* liberaPilha (Pilha* p)      LIBERA A PILHA (CONSTRUIR)

void imprime (Pilha* p)     	   IMPRIMA A PILHA (CONSTRUIR)

int vaziaPilha(Pilha *p)	   VERIFICA SE A PILHA EST� VAZIA, RETORNA 1 (CONSTRUIR)

*/

typedef struct no {
    int info;
    struct no *prox;
} No;

typedef struct pilha {
    No *Topo;
} Pilha;

Pilha *CriaPilha() {
    Pilha *p;
    p = (Pilha *) malloc(sizeof(Pilha));
    p->Topo = NULL;
    return p;
}

// VERIFICA SE A PILHA EST� VAZIA, RETORNA 1 (CONSTRUIR)
int vaziaPilha(Pilha *p) {
    if (p != NULL) {
        if (p->Topo != NULL) {
            return 0;
        }
        return 1;
    } else {
        printf("\nErro! Lista não existe!\n");
        exit(1);
    }
}

No *ins_ini(No *t, int a) {
    No *aux = (No *)malloc(sizeof(No));
    aux->info = a;
    aux->prox = t;
    return aux;
}

void push(Pilha *p, int v) {
    p->Topo = ins_ini(p->Topo, v);
}

No *ret_ini(No *aux) {
    No *p = aux->prox;
    free(aux);
    return p;
}

int pop(Pilha *p) {
    int v;
    if (vaziaPilha(p)) {
        printf("\n\n\t==> Pilha VAZIA, IMPOSSIVEL CONTINUAR.\b\n");
        exit(1); /* aborta programa */
    }
    v = p->Topo->info;
    p->Topo = ret_ini(p->Topo);
    return v;
}

// LIBERA A PILHA (CONSTRUIR)
Pilha* liberaPilha (Pilha* p) {
    No *aux;
    if (p != NULL) {
        while (p->Topo != NULL) {
            aux=p->Topo;
            p->Topo=aux->prox;
            free(aux);
        }
    } else {
        printf("\nErro! Pilha não existe!\n");
        exit(1);
    }

    return NULL;
}

// IMPRIMA A PILHA (CONSTRUIR)
void imprime (Pilha* p) {
    if (!vaziaPilha(p)) {
        for (No *aux=p->Topo; aux != NULL; aux=aux->prox) {
            printf("%d ", aux->info);
            if (aux->prox != NULL) {
                printf("-> ");
            }
        }
    } else {
        printf("\nPILHA VAZIA, IMPOSSÍVEL IMPRIMIR\n");
    }
}

// função extra 
void ler_inserir_item(Pilha *p) {
    int n;
    printf("Digite um item a ser inserido na pilha: ");
    scanf("%d", &n);
    push(p, n);
}

#endif // PILHA_H_INCLUDED
