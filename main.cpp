#include <iostream>

#include "src/increment_test.hpp"

int main() {
  int a = 5;
  std::cout << "Original a = " << a << std::endl;
  increment_reference(a);
  std::cout << "After increment_reference(a): " << a << std::endl;

  int b = 5;
  std::cout << "Original b = " << b << std::endl;
  int result = increment_value(b);
  std::cout << "increment_value(b) returned " << result
            << ", but b is still " << b << std::endl;
  return 0;
}
