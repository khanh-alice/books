#include <iostream>

int main() {
  std::cout << "Enter two numbers:" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;

  int lower = v1, upper = v2;
  if (lower > upper) {
    lower = v2;
    upper = v1;
  }

  std::cout << "The numbers between " << lower << " and " << upper
            << " are: " << std::endl;
  while (lower <= upper) {
    std::cout << lower << std::endl;
    ++lower;
  }
  return 0;
}
