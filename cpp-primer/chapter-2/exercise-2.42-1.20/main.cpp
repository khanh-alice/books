#include <iostream>

#include "Sales_data.h"

int main() {
  Sales_data currData;
  double price = 0.0;

  while (std::cin >> currData.bookNo >> currData.units_sold >> price) {
    currData.revenue = currData.units_sold * price;
    std::cout << currData.bookNo << " " << currData.units_sold << " "
              << currData.revenue << " " << price << std::endl;
  }
  return 0;
}
