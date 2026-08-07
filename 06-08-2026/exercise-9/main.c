#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  double a, b, c, delta = 0;
  printf("Digite três números que expressam os indíces de uma expressão de 2º grau: Ax²+Bx+C: \n", &a, &b, &c);
  scanf("%lf %lf %lf", &a, &b, &c);

  delta = pow(b, 2) - 4*a*c;

  if (delta > 0) {
    printf("As raízes da expressão (%.2lf)x² + (%.2lf)x + (%.2lf) são: %.2lf e %.2lf.", a, b, c, (b + sqrt(delta))*0.5, (b - sqrt(delta))*0.5);
  } else if (!delta) {
    printf("A raiz da expressão (%.2lf)x² + (%.2lf)x + (%.2lf) é %.2lf.", a, b, c, (b/2));
  } else {
    printf("A expressão ( %.2lf )x² + ( %.2lf )x + ( %.2lf ) não possui raízes reais.", a, b, c);
  }

  return 0;
}