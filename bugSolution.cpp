#include <iostream>
#include <vector>

int main() {
  // Using std::vector<char> for boolean representation
  std::vector<char> vec; 
  vec.push_back(1); // true
  vec.push_back(0); // false

  if (vec[0]) {
    std::cout << "First element is true" << std::endl;
  }

  return 0;
}
