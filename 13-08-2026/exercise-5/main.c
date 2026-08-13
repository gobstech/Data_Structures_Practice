#include <stdio.h>
#include <stdlib.h>

int main() {

  int matriz[4][4], i, j, soma_diagonal_principal = 0, nums_pares = 0, somas_linhas[4], maiores_valores_colunas[4], tmp, maior_valor_diagonal_secundaria = 0;

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("Digite o elemento que ocupará a posição da %dª linha e da %dª coluna: ", i+1, j+1);
      scanf("%d", &matriz[i][j]);

      if (matriz[i][j] % 2 == 0) nums_pares++;
      if (i == j) soma_diagonal_principal += matriz[i][j];
    }
    printf("\n");
  }

  printf("Matriz original: \n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("Matriz transposta: \n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("%d ", matriz[j][i]);
    }
    printf("\n");
  }

  j = 3;
  for (i = 0; i < 4; i++) {
    if (i == 0 && j == 3) {
      maior_valor_diagonal_secundaria = matriz[i][j];
    }

    if (matriz[i][j] > maior_valor_diagonal_secundaria) {
      maior_valor_diagonal_secundaria = matriz[i][j];
    }
    j--;
  }

  int soma_linha_atual;
  for (i = 0; i < 4; i++) {
    soma_linha_atual = 0;
    for (j = 0; j < 4; j++) {
      soma_linha_atual += matriz[i][j];
    }
    somas_linhas[i] = soma_linha_atual;
  }

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      if (j == 0) {
        maiores_valores_colunas[i] = matriz[j][i];
      }

      if (matriz[j][0] > maiores_valores_colunas[i]) {
        maiores_valores_colunas[i] = matriz[j][i];
      }
    }
  }

  for (i = 0; i < 4; i++) {
    tmp = matriz[i][0];
    matriz[i][0] = matriz[i][3];
    matriz[i][3] = tmp;
  }

  printf("Matriz: \n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("\nQuantidade de números pares da matriz: %d\n", nums_pares);
  printf("Soma dos valores da diagonal principal: %d\n", soma_diagonal_principal);
  printf("Maior valor da diagonal secundária: %d\n", maior_valor_diagonal_secundaria);
  
  printf("Somas de cada linha da matriz: \n");
  for (i = 0; i < 4; i++) {
    printf("Soma da linha %d: %d\n", i+1, somas_linhas[i]);
  }
  
  printf("Maiores valores de cada coluna: \n");
  for (i = 0; i < 4; i++) {
    printf("Maior valor da coluna %d: %d\n", i+1, maiores_valores_colunas[i]);
  }

  return 0;
}