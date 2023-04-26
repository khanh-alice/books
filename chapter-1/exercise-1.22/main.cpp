#include <iostream>

#include "Sales_item.h"

int main() {
  Sales_item curr, total;

  if (!(std::cin >> total)) {
    return -1;
  }

  while (std::cin >> curr) {
    total += curr;
  }
  std::cout << total << std::endl;
  return 0;
}
