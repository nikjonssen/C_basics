#include <stdio.h>;

// Create structures
struct myStructure {
  int myNum;
  char myLetter;
};

struct myStructure2 {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  // Create different struct variables
  struct myStructure s1;
  struct myStructure2 s3;

  // Assign values to different struct variables
  s1.myNum = 10;
  s1.myLetter = 'J';

  // Create a structure variable and assign values to it
  struct myStructure2 s2 = {12, 'N', "Some text"};

  // Copy structure
  s3 = s2;

  // Modify values
  s3.myNum = 16;
  strcpy(s3.myString, "Something else");

  // Print values
  printf("S1 number: %d\n", s1.myNum);
  printf("S2 number: %d\n", s2.myNum);
  printf("S1 letter: %c\n", s1.myLetter);
  printf("S2 letter: %c\n", s2.myLetter);
  printf("S3 number: %d\n", s3.myNum);
  printf("S3 letter: %c\n", s3.myLetter);
  printf("S2 string: %s\n", s2.myString);
  printf("S3 string: %s\n", s3.myString);

  return 0;
}
