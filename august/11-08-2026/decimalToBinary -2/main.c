#include <stdio.h>
#include <stdlib.h>

// Giovanni's code
void decimalToBinary(int num) {
  if (num > 1) {
    decimalToBinary(num/2);
  }
  if (num % 2 == 0) {
    printf("0");
  } else {
    printf("1");
  }
}

int main() {
  int num;
  scanf("%d", &num);
  decimalToBinary(num);
  return 0;
}