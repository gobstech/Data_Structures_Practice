#include <stdio.h>
#include <stdlib.h>

int main() {

  int a = 0;
  
  printf("Enter an integer number: ");
  scanf("%d", &a);

  if ((a % 3 == 0) && (a % 5 == 0))
    printf("%d is divisible by the 3 and 5 at the same time.\n", a);
  else
    printf("%d is not divisible by the 3 and 5 at the same time.\n", a);

  return 0;
}