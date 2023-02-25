#include <stdio.h>;
#include <stdbool.h>;

int main(){

  int usrInt;
  char usrChr;
  char usrName[30];
  // string size specification is required (30)

  printf("User input: \n");
  printf("Type your number and a letter: \n");
  scanf("%d %c", &usrInt, &usrChr);
  // reference operator ('&') stores the memory address of the variable
  printf("\nYour number is: %d\n", usrInt);
  printf("\nYour letter is: %c\n\n", usrChr);

  printf("Now enter your username:\n");
  // (!) scanf() function takes only a single word as input, it considers space as a terminating character
  scanf("%s", usrName);
  // reference operator ('&') is not required with strings
  getchar();
  // (!) adding getchar() is necessary to prevent premature execution of the next ('fgets') function (!)
  // problem is that scanf() leaves in memory extra "\n" character after execution
  printf("\nYour username is: %s\n\n", usrName);

  // considered 'good practice' not to use scanf() and fgets() together or in sequience
  char fullName[30];
  printf("Good:\n");
  printf("Now enter your full name:\n");
  // (!) fgets() function takes  multiple words as input
  fgets(fullName, sizeof(fullName), stdin);
  printf("Oh, hey %s", fullName);

  return 0;
}
