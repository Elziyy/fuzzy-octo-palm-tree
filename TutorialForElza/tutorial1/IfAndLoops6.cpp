#include <iostream>

void ifStatement();
void whileLoop();
void forLoop();
void switches();

int main() { // run the Program for the explaination in action!

  std::cout << "This is your explaination, but different now! Type in "
               "a number for an explaination! "
            << std::endl
            << "Type 1 for if-statements!" << std::endl
            << "Type 2 for while-loops" << std::endl
            << "Type 3 for for-loops" << std::endl
            << "Type 4 for switches: ";
  int chosenNumber;
  std::cin >> chosenNumber;

  switch (chosenNumber) {
  case 1:
    ifStatement();
    break;
  case 2:
    whileLoop();
    break;
  case 3:
    forLoop();
    break;
  case 4:
    switches();
    break;
  };

  return 0;
}

void ifStatement() {

  int number;
  std::cout << "Enter a number! ";
  std::cin >> number;
  std::cout << std::endl;

  // An if-statements and if else statements in C++ is nearly identical to one
  // in python. An in-statement system in python would be:

  // if (condition):
  //   codeblock
  // elif (condition):
  //   codeblock
  // else:
  //   codeblock

  // An if-statement system in C++ is as follows:
  if (number < 6) {
    std::cout << "Smaller than six!" << std::endl;
  } else if (number > 6) {
    std::cout << "Greater than six!" << std::endl;
  } else {
    std::cout << "Equal to six!" << std::endl;
  };

  // Make sure to only use the semicolon at the end of the last curly brackets.
  // If you include it between the if- and else if, or between else if and else,
  // it will yield on error.

  // If you don't use a curly bracket at the very end, quirky stuff can happen!
  // However, if you just put it there the chance if this happening is 0.
}

void whileLoop() {

  // A while loop is also pretty similar to pythons version!

  int counter = 0;

  // Booleans can also be used as a condition. Use ![bool] to flip it!
  // !true = false, !false = true.

  while (!false) {
    std::cout << "This is in a loop with number " << counter << std::endl;

    // The [variable]++ is mostly used to increment a variable by one. These
    // others also work just fine.
    counter++;
    counter = counter + 1;
    counter += 1;

    if (counter > 30) {
      // Use break to force yourself out of a loop
      break;
    };
  };

  std::cout << "Its done now" << std::endl;
}

void forLoop() {

  int startingValue = 0;
  int endingValue = 10;
  int incrementValue = 1;

  // A for loop in python goes like:

  // for [variableName] in range(startingvalue, endingvalue, incrementvalue):
  //   codeblock

  // In C++, it is a little differently:
  // For loops in C++ are math, all the parameters are now equations.

  for (int i = startingValue; i <= endingValue; i += incrementValue) {
    std::cout << "This is in a loop with number " << i << std::endl;
  };

  // A common mistake is accidentally flipping the <= sign to a >= sign, which
  // completely renders it useless.
}

void switches() {

  // A switch is basically an if-statement clusterfuck but cleaner.
  // The conditions can only involve numbers or single characters, for the rest,
  // use if statements.
  std::cout << "Give-a me a number for a coole surprise (read this with the voice of mario): ";
  int aNumber;
  std::cin >> aNumber;
  std::cout << std::endl;

  switch (aNumber) {
  case 1:
    std::cout << "A text" << std::endl;

    // Use break at the end of a case so that the compiler doesn't check for
    // other matches. (idk why it even does it in the first place but there is
    // probably a reason for it so just use break.)

    break;
  case 2:
    std::cout << "A different text" << std::endl;
    break;
  default:
    // This is the default case, an optial case that is run when no other
    // matches were found.

    std::cout << "Another text" << std::endl;
    break;
  };
}