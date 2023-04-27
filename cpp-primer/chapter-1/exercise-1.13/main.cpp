#include <iostream>

int main() {
  // Exercise 1.9
  int sum = 0;
  for (int val = 50; val <= 100; ++val) {
    sum += val;
  }
  std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

  // Exercise 1.10
  for (int val = 10; val >= 0; --val) {
    std::cout << val << std::endl;
  }

  // Exercise 1.11
  std::cout << "Enter two numbers:" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;

  std::cout << "The numbers between " << v1 << " and " << v2
            << " are: " << std::endl;
  for(int val = v1; val <= v2; ++val) {
    std::cout << val << std::endl;
  }
  for(int val = v2; val <= v1; ++val) {
    std::cout << val << std::endl;
  }

  return 0;
}
