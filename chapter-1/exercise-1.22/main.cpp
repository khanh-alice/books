#include <iostream>

#include "Sales_item.h"

int main() {
  Sales_item curr, total;
  int cnt = 0;

  while (std::cin >> curr) {
    if (cnt == 0) {
      total = curr;
    } else {
      total += curr;
    }
    ++cnt;
  }
  std::cout << total << std::endl;
  return 0;
}
