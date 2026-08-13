#include <stdio.h>
#include <stdlib.h>

int main() {

  float matrix[10][10], line_4_sum = 0, col_5_least_element, greatest_element_diagonal;

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf("Enter the element in line %d column %d: ", i, j);
      scanf("%f", &matrix[i][j]);

      if (i == 3) {
        line_4_sum += matrix[i][j];
      }

      if (j == 4) {
        if (i == 0) {
          col_5_least_element = matrix[i][j];
        }

        if (matrix[i][j] < col_5_least_element) {
          col_5_least_element = matrix[i][j];
        }
      }

      if (i == j) {
        if (i == 1) {
          greatest_element_diagonal = matrix[i][i];
        }

        if (matrix[i][i] > greatest_element_diagonal) {
          greatest_element_diagonal = matrix[i][i];
        }
      }
    }
  }

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%.2f ", matrix[i][j]);
    }
    printf("\n");
  }

  printf("Sum of line 4 elements: %.2f.\n", line_4_sum);
  printf("Least number of the column 5: %.2f.\n", col_5_least_element);
  printf("Greatest number of the diagonal: %.2f.\n", greatest_element_diagonal);
  return 0;
}