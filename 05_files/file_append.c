#include <stdio.h>;

int main(){
  // declaring a pointer of type FILE
  FILE *fptr;

  // Open a file append mode / create a file
  fptr = fopen("filename.txt", "a"); // 'a' stands for append to file

  // Append some text to the file
  fprintf(fptr, "\nHey There!");
  // if there is no such file it will be created with the appended text

  // Close the file
  fclose(fptr);

  return 0;
}
