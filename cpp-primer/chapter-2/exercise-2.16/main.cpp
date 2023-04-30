#include <iostream>

int main() {
  int i = 0, &r1 = i;
  double d = 0, &r2 = d;

  r2 = 3.14159;
  std::cout << "(a) r2: " << r2 << std::endl;

  r2 = r1;
  std::cout << "(b) r2: " << r2 << std::endl;

  i = r2;
  std::cout << "(c) i: " << i << std::endl;

  r1 = d;
  std::cout << "(d) r1: " << r1 << std::endl;

  return 0;
}
