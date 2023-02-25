#include <stdio.h>;

int main(){

  int myAge = 43;
  int* ptr = &myAge;  // the type of the pointer must match the type of the variable (int)

  printf("Memory and pointers:\n");
  printf("Current variable memory address: %p\n", &myAge);
  // %p stands for 'pointer' which stores memory address
  printf("Current pointer value: %p\n", ptr);
  printf("Value of myAge through the pointer: %d\n\n", *ptr);  // ('*') the dereference operator

  // Pointers and arrays
  int myNumbers[4] = {25, 50, 75, 100};
  printf("Pointers and arrays:\n");
  for (int i = 0; i < 4; i++) {
  printf("array element: %d, memory address: %p\n", myNumbers[i], &myNumbers[i]);
  };
  printf("Memory size of the array element: %lu bytes\n", sizeof(myNumbers[0]));
  printf("Memory size of the whole array: %lu bytes\n\n", sizeof(myNumbers));

  printf("Relation:\n");
  printf("Array name = array first element pointer\n");
  // the name of an array, is actually a pointer to the first element of the array
  printf("Array name value: %p\n", myNumbers);
  printf("Array first element pointer/address:%p\n\n", &myNumbers[0]);
  // get elements through name pointer
  printf("First element through array name: %d\n", *myNumbers);
  printf("Second element through array name: %d\n", *(myNumbers + 1));
  printf("Third element through array name: %d\n\n", *(myNumbers + 2));
  // it is possible to change the value of array elements with pointers
  *myNumbers = 10;
  *(myNumbers +1) = 30;
  printf("Changed first element through array name: %d\n", *myNumbers);
  printf("Changed second element through array name: %d\n", *(myNumbers + 1));


  return 0;
}
