#include <iostream>
#include <string>
#include <vector>

int main() {

  // A vector is like an array but
  // F L E X I B L E.
  // You can change the size of a vector after it has been declared, and vectors
  // have waaay more functions for working with them.

  // A vector is declared like this:
  std::vector<int> perfectNumbers = {6, 28, 496, 8182};
  std::vector<std::string> someWords = {"Hello", "this", "is", "a", "vector"};

  // We do not have to specify a size since it can be changed whenever we like.

  // A new element can be added like this. It will be added to the end, so the
  // index is 4.
  perfectNumbers.push_back(33550336);

  perfectNumbers.push_back(293823904842934);

  // We can remove elements in a similar way:
  perfectNumbers.pop_back();

  // Accessing elements is also easier:
  std::cout << perfectNumbers.front() << std::endl; // Gives the first element
  std::cout << perfectNumbers.back() << std::endl;  // Gives the last element
  std::cout << perfectNumbers.size() << std::endl; // Gives the size of a vector

  // Accessing elements by index numbers is done a little differently:
  std::cout << perfectNumbers.at(4) << std::endl;
  // This is also possible, but the former is prefered because it throws an
  // error when the index is larger than the size of the vector.
  std::cout << perfectNumbers[4] << std::endl;

  // Just like with arrays, changing an element can also be done with .at(index)
  // and [index].

  // Using a foreach loop also works perfectly fine.

  return 0;
};