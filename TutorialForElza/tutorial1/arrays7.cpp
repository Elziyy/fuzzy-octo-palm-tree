#include <array>
#include <iostream>

int main() {

  // Arrays are variables that hold other variables. Arrays can only store
  // variables of the same datatype.

  // This array can store 5 numbers, but it currently holds 4... Or does it?
  // When a variable is emptied, or not yet defined, its value is none or null
  // (\0). So in some sense, the array does hold 5 elements.
  long int perfectNumbers[5] = {6, 28, 496, 8128};

  // We can add a fifth element by doing this:
  perfectNumbers[4] = 33550336;

  // Changing an element is done in the same way.

  // A sixth element cannot be added, it will yield an error called stack
  // smashing. Once an array has been declared, its size cannot be changed.

  // We can empty an element by setting it to NULL.
  perfectNumbers[4] = NULL;

  // A useful way to think about NULL is this:

  // The value of this int is 5;
  int number1 = 5;
  // The value of this int is 0;
  int number2 = 0;
  // The value of these ints are NULL;
  int number3;
  int number4 = NULL;

  // Keep in mind that the index of an element in an array starts at 0,
  // not 1. So this new number is the fifth element, with index 4.

  for (int k = 0; k <= 4; k++) {
    std::cout << perfectNumbers[k] << std::endl;
  };

  std::cout << std::endl;

  // You don't have to include the amount of elements in an array; the compiler
  // is smart enough to figure it out itself. However, you should just do it,
  // because it might not always work.
  int primeNumbers[] = {2, 3, 5, 7, 11, 13};

  // We can use a for loop to output all the elements, but we can also use a
  // foreach loop:
  for (int k : primeNumbers) {
    std::cout << k << std::endl;
  };

  // An example of why you should specify the size of an array:
  // int uselessArray[];
  // This array will throw an error.

  return 0;
}