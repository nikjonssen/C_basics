#include <stdio.h>

int main() {
  // Initial
  char s = 'S';
  int num= 8;
  printf("Hello World!\nHere i am m%d.\n", num); // this is a single line comment
  printf("Can you C my %c?\n\n", s);  /* this is a multi line comment */

  // Variables
  int a = 10, b = 5, c = 15;
  int e, f, g;
  e = f = g = 25;
  printf("Variables:\n");
  printf("%d\n", a + b + c);
  printf("%d\n\n", e + f + g);

  // Data types
  float num2 = 3.5;
  printf("Data types:\n");
  printf("%.2f\n", num2);
  printf("%.1f\n", num2);
  printf("%.f\n\n", num2);

  // Type conversion
  float num3 = num / a;  // no conversion / implicit conversion
  float num4 = (float) num / a;  // explicit conversion
  printf("Type conversion:\n");
  printf("%f\n", num3);
  printf("%.1f\n\n", num4);

  // Constants
  const int YEAR = 1941;
  printf("Constants:\n");
  printf("%d\n\n", YEAR);

  // Operators
  int myInt;
  int leftShift = 8;
  int rightShift = 16;
  int power = 2;
  leftShift = leftShift << power;  // or leftShift <<= power, "left" leftShift * 2^power
  rightShift = rightShift >> power;  // or rightShift <<= power, "right" rightShift / 2^power
  printf("Operators:\n");
  printf("Size of int is %lu bits\n", sizeof(myInt));
  printf("Left shift: %lu, Right shift: %lu\n\n", leftShift, rightShift);

  // Booleans
  #include <stdbool.h>
  bool isVapingCool = false;
  bool isSkatingCool = true;
  printf("Booleans:\n");
  printf("%d\n", isVapingCool);
  printf("%d\n\n", isVapingCool != isSkatingCool );

  // Conditions (if / else)
  int time = 18;
  printf("Conditions:\n");
  printf("If else:\n");
  if (time < 10) {
    printf("Good morning.\n");
  } else if (time < 20) {
    printf("Good day.\n");
  } else {
    printf("Good evening.\n");
  };
  (time < 18) ? printf("Good day.\n\n") : printf("Good evening.\n\n");  // ternary operator

  // Switch
  printf("Switch:\n");
  int day = 4;
  switch (day) {
    case 6:
      printf("Today is Saturday\n\n");
      break;
    case 7:
      printf("Today is Sunday\n\n");
      break;
    default:
      printf("Looking forward to the Weekend\n\n");
  };

  // Loops
  int loop1 = 2;
  int loop2 = 4;
  printf("Loops:\n");
  while(loop1 < 5){
    printf("This is while loop : %d\n", loop1);
    loop1++;
  };
  do{
    printf("This is do-while loop: %d\n", loop2);
    loop2--;
  } while (loop2 > 1);
  for(int i = 1;i <= 5; i++){
    if(i == 3){
      printf("This is for loop: continue\n");
      continue;
    }
    if(i == 5){
        printf("This is for loop: break.\n");
        break;
    }
    printf("This is for loop: %d\n", i);
  };
  printf("\n");

  // Arrays
  int myNumbers[] = {25, 50, 75, 100};
  int myNumbers2[4];  // declared an array of 4 integers
  int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
  // multidimensional array of 2 'rows' and 3 'columns'
  // i.e. with 2 elements each containing 3 elements
  printf("Arrays:\n");
  printf("Single dimension array: second element %d\n", myNumbers[1]);
  printf("Single dimension empty array: second element %d\n", myNumbers2[1]);
  printf("Multidimensional array: third element %d\n\n", matrix[0][2]);

  // Strings
  // #include <string.h>  // with some compilers you need this 'include' to use functions
  char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
  // "null terminating character" at the end
  //  or
  char greetings2[] = "Hello World!";
  greetings2[0] = 'Y';
  char txt[] = "So-called \"Vikings\" from the north.";
  char str1[20] = "Hello ";  // defined sting size of 20 characters (not necessary)
  char str2[] = "There!";
  char str3[20];  // defined sting size of 20 characters (necessary)
  strcat(str1, str2);  // concatenation stores result in str1
  strcpy(str3, greetings2);  // copy string ( to, from )
  printf("Strings:\n");
  printf("This is a string: %s\n", greetings);
  printf("This is modified string: %s\n", greetings2);
  printf("Backslash escape character for quotes: %s\n", txt);
  printf("String memory size in bytes: %d\n", sizeof(greetings2));
  printf("Same string length: %d\n", strlen(greetings2));
  printf("Concatenation strings: %s\n", str1);
  printf("Copy string: %s\n", str3);
  printf("Equal strings comparison: %d\n", strcmp(str3, greetings2));
  printf("Not equal strings comparison: %d\n\n", strcmp(str3, str1));
  // returns 0 if the two strings are equal, otherwise a value that is not 0

  return 0;
}
