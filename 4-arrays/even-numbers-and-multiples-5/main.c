#include <stdio.h>
#include <stdlib.h>

int main() {

  int v[15], multiples_five = 0, even_numbers = 0, i = 0;
  
  printf("Enter each of the 15 elements of the array: \n");
  for (i; i < 15; i++) {
    do
    {
      scanf("%d", &v[i]);
      if (v[i] <= 0) printf("Enter only positive numbers:\n");
    } while (v[i] <= 0);

    if (v[i] % 2 == 0) even_numbers++;
    if (v[i] % 5 == 0) multiples_five++;
  }

  printf("\nMultiples of five: %d\n", multiples_five);
  printf("Even numbers: %d", even_numbers);

  return 0;
}