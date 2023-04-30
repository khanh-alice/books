#include <iostream>

int main() {
  int i1 = 1, i2 = 2;
  int *p = &i1;

  // change value of pointer p
  std::cout << "*p: " << *p << std::endl;
  p = &i2;
  std::cout << "*p: " << *p << std::endl;

  // change value of object to which p points
  std::cout << "i2: " << i2 << std::endl;
  *p = 3;
  std::cout << "i2: " << i2 << std::endl;

  return 0;
}
