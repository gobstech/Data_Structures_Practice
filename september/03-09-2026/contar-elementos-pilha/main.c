#include <stdio.h>
#include <stdlib.h>
#include "./PILHA_INCOMPLETA.h"

int main () {
  Pilha *p;
  p = CriaPilha();
  push(p, 1);
  push(p, 2);
  push(p, 3);
  push(p, 4);
  push(p, 5);
  imprime(p);
  printf("\n%d\n", contar_elementos_pilha(p));
  p->Topo = inverter_pilha(p);
  imprime(p);
  int pesquisa = apaga_no(p, 3);
  printf("\n%d\n", pesquisa);
  imprime(p);
  return 0;
}