#include <stdio.h>;
#include <math.h>;

// All of the segmentation between function declarations and definitions are there
// as a convention of 'good practice'
// therefore in personal projects you can use your own 'expression flow'

// Functions declaration:
void myVoid();  // void function does not return any value
void myPerson(char name[], int age);
void myLoop(int myNumbers[3]);
int mySum(int x, int y);  // int function returns integer value
int myRecurse(int k);  // recursive function

int main(){
  int numbers[3] = {10, 20, 30};
  int result = mySum(5,10);

  myVoid();
  myPerson("John", 43);
  myLoop(numbers);
  printf("This is mySum result: %d\n", result);
  printf("This is myRecurse result: %d\n\n", myRecurse(10));
  printf("And some math function from math.h:\n");
  printf("Square root: %.f\n", sqrt(16));
  printf("Power of: %.f\n", pow(4, 3));
  // format specifier: float with 0 decimals
  printf("Math ceil 1.4: %.2f, math floor 1.4: %.2f\n", ceil(1.4), floor(1.4));
  // format specifier: float with 2 decimals

  return 0;
};

// Function definitions:
void myVoid(){
  printf("Void function has been executed\n");
};

void myPerson(char name[], int age) {
  printf("Hello %s. You are %d years old.\n", name, age);
};

void myLoop(int myNumbers[3]) {
  for (int i = 0; i < 3; i++) {
    printf("myLoop array element number %d: %d\n", (i + 1), myNumbers[i]);
  }
};

int mySum(int x, int y) {
  return x + y;
};

int myRecurse(int k) {
  if (k > 0) {
    return k + myRecurse(k - 1);
  } else {  // base case
    return 0;
  }
}
