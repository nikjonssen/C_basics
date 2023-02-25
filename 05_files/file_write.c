#include <stdio.h>;

int main(){
  // declaring a pointer of type FILE
  FILE *fptr;

  // Open a file write mode / create a file
  fptr = fopen("filename.txt", "w");
  // if there is no such file it will be created

  // Write text to the file
  fprintf(fptr, "Hello File!");
  // (!) if there is a content in the existing file it will be rewritten

  // Close the file
  fclose(fptr);

  return 0;
}
