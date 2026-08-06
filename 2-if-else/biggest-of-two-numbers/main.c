#include <stdio.h>
#include <stdlib.h>

int main() {

  float a = 0, b = 0;
  scanf("%f %f", &a, &b);

  if (a > b) {
    printf("%.2f is bigger than %.2f.", a, b);
  } else if (a < b) {
    printf("%.2f is bigger than %.2f.", b, a);
  } else {
    printf("%.2f and %.2f are equal.", a, b);
  }
  
  return 0;
}