#include <iostream>

// It is time for our second library: string
#include <string>

int main() {

  // Now that we have included the string library, we can use the datatype
  // string! We must use std:: since idk we just have to.
  std::string string1 = "this is cool!";

  std::cout << string1 << std::endl;

  // Lets make a little program that asks for your name and then outputs it!
  std::string answer;
  std::cout << "Give me your full name! ";

  // Wait, we are NOT going to use cin. cin and string inputs are an absolute
  // clusterfuck. We will use getline for cleaner code. I will not elaborate
  // further Just keep in mind to only use getline for strings, not anything
  // else.
  std::getline(std::cin, answer);

  std::cout << "According to a recent survey your full name is: " << answer
            << std::endl;

  return 0;
}