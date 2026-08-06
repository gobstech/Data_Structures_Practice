#include <stdio.h>
#include <stdlib.h>

int main() {

  float income = 0, percent = 0;

  do  {
      printf("Enter your current income: \n");
      scanf("%f", &income);
      
      if (income <= 0)
        printf("Enter a valid income!\n");
  } while (income <= 0); 

  do  {
    printf("Enter the percentage of adjustment:\n");
    scanf("%f", &percent);

    if (percent < 0 || percent > 100)
      printf("Enter a valid percentage of adjustment!\n");
  } while (percent <= 0 || percent > 100);

  percent /= 100;

  printf("Current income: $ %.2f Percent: %.2f\n", income, percent);
  printf("New income: $ %.2f", income*(1 + percent));

  return 0;
}