#include <stdio.h>
#include <stdlib.h>

int main() {

  int a[10], sum = 0, lower_avg = 0, i = 0;
  double age_avg = 0;

  printf("Write down the ages of 10 people in a group: \n");
  for (i; i < 10; i++) {
    do
    {
      scanf("%d", &a[i]);
      if (a[i] <= 0) printf("Enter a valid age!\n");
    } while (a[i] <= 0);
    
    sum += a[i];
  }

  age_avg = sum/10;

  for (i = 0; i < 10; i++) {
    if (a[i] < age_avg) lower_avg++; 
  }

  printf("Age average: %.2lf\n", age_avg);
  printf("Number of ages that are below the average: %d\n", lower_avg);

  return 0;
}