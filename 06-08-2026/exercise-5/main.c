#include <stdio.h>
#include <stdlib.h>

int main() {

  double c = 0, l = 0, preco = 0, perimetro = 0;

  do
  {
    printf("Digite os valores do comprimento e da largura deste terreno respectivamente:\n");
    scanf("%lf %lf", &c, &l);

    if (c <= 0 || l <= 0) printf("Digite dimensões válidas!\n");
  } while (c <= 0 || l <= 0);

  do
  {
    printf("Digite o preço do metro de tela: \n");
    scanf("%lf", &preco);

    if (preco <= 0) printf("Digite um precço válido!\n");
  } while (preco <= 0);
  
  perimetro = 2*l+2*c;
  printf("Perímetro: %.2lf\n", perimetro);
  printf("Custo da cercamento: R$ %.2lf \n", perimetro*preco);

  return 0;
}