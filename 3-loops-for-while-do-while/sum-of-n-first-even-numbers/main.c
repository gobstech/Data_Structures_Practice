#include <stdio.h>
#include <stdlib.h>

int main() {

  int n, sum = 0;

  do
  {
    printf("Enter the number of even numbers you wish to add: ");
    scanf("%d", &n);
    
    if (n <= 0) printf("Enter a valid quantity!\n");
  } while (n <= 0);

  for (int i = 2; i <= (n*2); i+=2) {
    sum += i;
  }

  printf("Sum of the first %d even numbers: %d.", n, sum);

  return 0;
}