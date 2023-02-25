#include <stdio.h>;

int main(){
  // declaring a pointer of type FILE
  FILE *fptr;

  // Open a file in read mode
  fptr = fopen("filename.txt", "r");

  // Print some text if the file does not exist
  if(fptr == NULL) {
    printf("Not able to open the file.");
  } else {
  // Store the content of the file
  char myString[100];

  // Read the content and print it
  // fgets() reads only one line
  // to get the rest of them we need a loop
  while(fgets(myString, 100, fptr)) {  // fgets(content storage, size of storage, pointer)
    printf("%s", myString);
  }
  printf("\n");

  // Close the file
  fclose(fptr);
  }

  return 0;
}
