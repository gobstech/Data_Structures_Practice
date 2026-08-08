#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int typedPassword = 0, password = 123, isAuth = 0;

  for (int i = 3; i > 0; i--) {
    printf("You have %d attempts left to log in to the app.\n", i);
    printf("Enter your password: ");
    scanf("%d", &typedPassword);

    if (typedPassword == password) {
      isAuth = 1;
      break;
    } else {
      printf("Access has been denied.\n");
      system("pause");
    }
    system("cls");
  }

  system("cls");

  if (isAuth) printf("\nWelcome. Access granted!");
  else printf("\nYour auth attempts have ended. Try again later.\n");

  return 0;
}