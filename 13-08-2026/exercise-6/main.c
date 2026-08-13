#include <stdio.h>
#include <stdlib.h>

typedef struct Produto
{
  int codigo;
  int qtd_estoque;
  double valor_compra;
  double valor_venda;
} Prod;

int main() {

  Prod p[10];
  int i, maior_qtd_estoque = 0, maior_lucro = 0;

  for (i = 0; i < 4; i++) {
    do
    {
      printf("Digite um código de três dígitos entre 100 e 999 para o %dº produto: ", i+1);
      scanf("%d", &p[i].codigo);

      if (p[i].codigo < 100 || p[i].codigo > 999) printf("Digite um código válido!\n");
    } while (p[i].codigo < 100 || p[i].codigo > 999);

    do
    {
      printf("Digite a quantidade em estoque para o %dº produto: ", i+1);
      scanf("%d", &p[i].qtd_estoque);

      if (p[i].qtd_estoque < 0) printf("Digite uma quantidade válida!\n");
    } while (p[i].qtd_estoque < 0);

    if (p[i].qtd_estoque > p[maior_qtd_estoque].qtd_estoque) 
      maior_qtd_estoque = i;

    do
    {
      printf("Digite um valor de compra para o %d° produto: ", i+1);
      scanf("%lf", &p[i].valor_compra);

      if (p[i].valor_compra < 0) printf("Digite um valor de compra válido!\n");
    } while (p[i].valor_compra < 0);

    do
    {
      printf("Digite um valor de venda para o %d° produto: ", i+1);
      scanf("%lf", &p[i].valor_venda);

      if (p[i].valor_venda < 0) printf("Digite um valor de venda válido!\n");
    } while (p[i].valor_venda < 0);

    if (p[i].qtd_estoque*(p[i].valor_venda - p[i].valor_compra) > p[maior_lucro].qtd_estoque*(p[maior_lucro].valor_venda - p[maior_lucro].valor_compra)) {
      maior_lucro = i;
    }
  }

  printf("O produto com maior quantidade de estoque tem código %d.\nA quantidade de estoque do produto que proporciona o maior lucro é de %d unidades.", p[maior_qtd_estoque].codigo, p[maior_lucro].qtd_estoque);
  return 0;
}