#include <array>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>

int main() {

  // There are a fuck ton of datastructures in C++. Here are some of them and
  // their quirks

  // The standard is the vector, if a property isn't stated, that means that it
  // is the same as a vectors.

  // Array
  int integers[6] = {1, 2, 3, 4, 5, 6};
  // Not sizable

  // Vector
  std::vector<int> numberVector = {1, 2, 3, 4, 5, 6};
  // Holds 1 datatype
  // Sizable:
  //  Elements added to:
  //   Back
  //  Elements removed from:
  //   Back
  // Changeable by:
  //  Index
  // Accessable by:
  //  Index
  // Definable at declaration
  // Loopable
  // Unique elements supported
  // Ordered

  // List
  std::list<int> numberList = {1, 2, 3, 4, 5, 6};
  // Sizable:
  //  Elements added to:
  //   Front
  //   Back
  //  Elements removed from:
  //   Front
  //   Back
  // Changable by:
  //  Front
  //  Back
  // Accessable by:
  //  Front
  //  Back

  // Stack
  std::stack<int> numberStack;
  numberStack.push(1);
  numberStack.push(2);
  numberStack.push(3);
  numberStack.push(4);
  numberStack.push(5);
  numberStack.push(6);
  // Changable by:
  //  Back
  // Accessable by:
  //  Back
  // Not definable at declaration
  // Not loopable

  // Queue
  std::queue<int> numberQueue;
  numberQueue.push(1);
  numberQueue.push(2);
  numberQueue.push(3);
  numberQueue.push(4);
  numberQueue.push(5);
  numberQueue.push(6);
  // Sizable:
  //  Elements added to:
  //   back
  //  Elements removed from:
  //   front
  // Changable by:
  //  Front
  //  Back
  // Accessable by:
  //  Front
  //  Back
  // Not definable at declaration
  // Not loopable

  // Dequeue
  std::deque<int> numberDeque = {1, 2, 3, 4, 5, 6};
  // Sizable:
  //  Elements added to:
  //   front
  //   back
  //  Elements removed from:
  //   front
  //   back
  // Changable by:
  //  Index
  //  Front
  //  Back
  // Accessable by:
  //  Index
  //  Front
  //  Back

  // Set
  std::set<int> numberSet = {1, 2, 3, 4, 5, 6};
  // Sizable:
  //  Elements added to:
  //   back
  //  Elements removed from:
  //   value
  // Not changable
  // Not accessable
  // Auto-sorted by:
  //  alphabet
  //  value
  // Duplicates not supported

  // Map
  std::map<std::string, int> numberMap = {{"one", 1},   {"two", 2},
                                          {"three", 3}, {"fout", 4},
                                          {"five", 5},  {"six", 6}};
  // Sizable:
  //  Elements addable.
  //  Elements removable.
  //   Back
  // Changeable by:
  //  Keyname
  // Accessable by:
  //  Keyname
  // Definable at declaration
  // Loopable
  // Unordered

  return 0;
}