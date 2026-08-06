#include <stdio.h>
#include <stdlib.h>

int main() {

  float a, b, c;
  
  do {
    printf("Enter the prices of the products: \n");
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
      printf("Enter valid prices!\n");
    }

  } while (a <= 0 || b <= 0 || c <= 0);

  if ((a > b) && (a > c)) {
    printf("Buy the first product, it is the cheapest: $ %.2f.\n", a);
  } else if ((b > a) && (b > c)) {
    printf("Buy the second product, it is the cheapest: $ %.2f.\n", b);
  } else if ((c > a) && (c > b)) {
    printf("Buy the third product, it is the cheapest: $ %.2f.\n", c);
  } else {
    printf("The three products have the same price. You can buy any of them.");
  }
  
  return 0;
}