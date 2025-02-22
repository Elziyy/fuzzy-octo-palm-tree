#include <iostream>
#include <string>

// Just like variables, we can only use functions after they are declared. This
// means that we can either declare and define them before main, or declare
// them, and later define them.
std::string saySomething(std::string something);
void sayHello();

// Now is a good time to talk about universal variables. If you declare a
// variable inside of a function, it can only be used in that same function.
// However, if you define them outside of a function (most commonly at the top
// of the file), they can be accessed anywhere! Both universal variables and
// non-universal variables have their ups and downs, so which one to use depends
// on the situation.

// This variable can be used anywhere.
int globalInt = 10;

// This function is called main
int main() {

  // We can call functions from main so that we don't have to rewrite something
  // everytime we want to use it.

  std::cout << saySomething("Hello there!") << std::endl;

  sayHello();

  return 0;
}

// The input of every function is called the parameter.
// The return type of a function is in this case in an int. To return nothing,
// use void.

std::string saySomething(std::string something) {

  // The variables a and b do not need to be defined in the function, because
  // they are already defined as parameters.

  std::string result = something + " and something!";

  return result;
}

// This function doesn't return anything, so we use return type void.
void sayHello() {
  
  std::cout << "Hello!" << std::endl;

}