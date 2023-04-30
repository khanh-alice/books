#include <iostream>

int main() {
  int i = 42;
  int *p = &i;

  if (p) {
    std::cout << "p is not a null pointer" << std::endl;
  }
  if (*p) {
    std::cout << "p points to an object that is not 0" << std::endl;
  }
  return 0;
}
