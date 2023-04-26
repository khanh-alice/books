#include <iostream>

int main() {
  std::cout << "Enter two numbers:" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;

  if (v1 >= v2) {
    std::cout << "The first number must be smaller than the second number."
              << std::endl;
    return -1;
  }

  std::cout << "The numbers between " << v1 << " and " << v2
            << " are: " << std::endl;
  while (v1 <= v2) {
    std::cout << v1 << std::endl;
    ++v1;
  }
  return 0;
}
