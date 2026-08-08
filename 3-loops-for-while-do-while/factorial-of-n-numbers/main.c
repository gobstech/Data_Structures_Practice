#include <stdio.h>
#include <stdlib.h>

int main() {

  int n, fact = 1;

  do {
    printf("Enter a positive number to know its factorial, to stop enter a negative number: \n");
    scanf("%d", &n);

    if (n < 0) break;

    if (n == 0) {
      printf("The factorial of 0 is 1.\n");
    } else if (n == 1) {
        printf("The factorial of 1 is 1.\n");
    } else {

      for (int i = n; i > 1; i--) {
        fact *= i;
      }    
      printf("The factorial of %d is %d\n", n, fact);
      fact = 1;
    }
  } while (n >= 0);

  return 0;
}