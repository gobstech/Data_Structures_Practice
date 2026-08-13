#include <stdio.h>
#include <stdlib.h>

int main() {

  int matrix[5][3];

  // Reads the matrix values
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Enter the number that will be in line %d column %d: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }

  // prints the original matrix
  printf("Original matrix: \n");
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  // prints the original matrix
  printf("Transposed matrix: \n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%d ", matrix[j][i]);
    }
    printf("\n");
  }

  return 0;
}