#include <stdio.h>
#include <stdlib.h>

int main() {

  int a = 0, pred = 0, succ = 0;
  printf("Digite um número: \n");
  scanf("%d", &a);

  pred = a - 1;
  succ = a + 1;

  printf("The predecessor of a %d is %d. And the successor is %d.", a, pred, succ);
  return 0;
}