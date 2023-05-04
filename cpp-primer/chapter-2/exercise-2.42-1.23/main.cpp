#include <iostream>

#include "Sales_data.h"

int main() {
  Sales_data currItem, item;
  double price = 0.0;

  if (!(std::cin >> item.bookNo >> item.units_sold >> price)) {
    std::cerr << "No data?!" << std::endl;
    return -1;
  }

  int cnt = 1;

  while (std::cin >> currItem.bookNo >> currItem.units_sold >> price) {
    if (item.bookNo == currItem.bookNo) {
      ++cnt;
    } else {
      std::cout << item.bookNo << " occurs " << cnt << " times" << std::endl;
      item = currItem;
      cnt = 1;
    }
  }
  std::cout << item.bookNo << " occurs " << cnt << " times" << std::endl;
  return 0;
}
