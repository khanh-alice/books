#include <iostream>

#include "Sales_item.h"

int main() {
  Sales_item curr, total;

  if (!(std::cin >> total)) {
    std::cerr << "No data?!" << std::endl;
    return -1;
  }

  while (std::cin >> curr) {
    total += curr;
  }
  std::cout << total << std::endl;
  return 0;
}
