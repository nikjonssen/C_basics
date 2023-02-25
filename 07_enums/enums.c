#include <stdio.h>;

// Enum ("enumerations") type represents a group of constants
// enum elements are tight-coupled and have initial values like an array
// e.g.
// enum Level0 {
//   LOW,  // equals to LOW=0
//   MEDIUM,  // thus MEDIUM=1
//   HIGH  // and HIGH=2
// };

enum Level {
  LOW = 25,
  MEDIUM = 50,
  HIGH = 75
};

int main() {
  // Create an enum variable and assign a value to it
  enum Level myVar = MEDIUM;

  switch (myVar) {
    case 25:
      printf("Low Level\n");
      break;
    case 50:
      printf("Medium level\n");
      break;
    case 75:
      printf("High level\n");
      break;
  }

  // Print the enum variable
  printf("Enum variable value: %d\n", myVar);

  return 0;
}
