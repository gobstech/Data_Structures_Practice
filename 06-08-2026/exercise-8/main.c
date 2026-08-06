#include <stdio.h>
#include <stdlib.h>

int main() {

  double a, b, c;
  printf("Escreva três números \"a\", \"b\" e \"c\":\n");
  scanf("%lf %lf %lf", &a, &b, &c);

  if (a < b) {
    printf("%.2lf ", a);
    if (b < c) {
      printf("%.2lf ", b);
      printf("%.2lf", c);
      } else {
        printf("%.2lf ", c);
        printf("%.2lf", b);
      }
  } else if (b < a) {
      printf("%.2lf ", b);
    if (a < c) {
      printf("%.2lf ", a);
        printf("%.2lf", c);
      } else {
        printf("%.2lf ", c);
        printf("%.2lf", a);
      }
    } else {
      printf("%.2lf ", c);
    if (a < b) {
      printf("%.2lf ", a);
      printf("%.2lf", b);
      } else {
        printf("%.2lf ", b);
        printf("%.2lf", a);
      }
  }

  return 0;
}