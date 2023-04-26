#include <iostream>

#include "Sales_item.h"

int main() {
  Sales_item currItem;
  while (std::cin >> currItem) {
    std::cout << currItem << std::endl;
  }
  return 0;
}
