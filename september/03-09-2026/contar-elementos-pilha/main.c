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
  inverter_pilha(p, p->Topo);
  imprime(p);

  return 0;
}