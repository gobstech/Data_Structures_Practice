#include <stdio.h>
#include <stdlib.h>

int main() {

  float matrix[5][5], greatest_value;
  int line_pos = 0, column_pos = 0;

  // Read the matrix
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("Enter the number that will place line %d column %d: ", i+1, j+1);
      scanf("%f", &matrix[i][j]);

      if (i == 0 && i == 0) {
        greatest_value = matrix[0][0];
      }

      if (matrix[i][j] > greatest_value) {
        greatest_value = matrix[i][j];
        line_pos = i+1;
        column_pos = j+1;
      }
    }
  }

  printf("\n");

  // Print the matrix
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%.2lf ", matrix[i][j]);
    }
    printf("\n");
  }

  printf("\n");

  printf("The greatest value of the matrix is %.2lf. Located at line %d and column %d.", greatest_value, line_pos, column_pos);

  return 0;
}