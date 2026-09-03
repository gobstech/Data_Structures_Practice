#include <stdio.h>
#include <stdlib.h>

int main() {

  double a, b, c, temp = 0;
  do
  {
    printf("Escreva três números diferentes entre si \"a\", \"b\" e \"c\" para exibí-los em ordem crescente:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == b || b == c || a == c) {
      printf("Digite três números diferentes entre si!\n");
    }

  } while (a == b || b == c || a == c);

  // solucao otimizada
  if (a > c) {
    temp = a;
    a = c;
    c = temp;
  }

  if (a > b) {
    temp = a;
    a = b;
    b = temp;
  }

  if (b > c) {
    temp = b;
    b = c;
    c = temp;
  }
  
  // if ((a < b) && (a < c)) {
  //   printf("%.2lf ", a);
  //   if (b < c) {
  //     printf("%.2lf %.2lf", b, c);
  //     } else {
  //       printf("%.2lf %.2lf", c, b);
  //     }
  // } else if ((b < a) && (b < c)) {
  //     printf("%.2lf ", b);
  //   if (a < c) {
  //     printf("%.2lf %.2lf", a, c);
  //     } else {
  //       printf("%.2lf %.2lf", c, a);
  //     }
  //   } else {
  //     printf("%.2lf ", c);
  //   if (a < b) {
  //     printf("%.2lf %.2lf", a, b);
  //     } else {
  //       printf("%.2lf %.2lf", b, a);
  //     }
  // }

  printf("%.2lf %.2lf %.2lf", a, b, c);

  return 0;
}