#include <iostream>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

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
