#include <iostream>

#include "Sales_data.h"

int main() {
  Sales_data total, trans;
  double price = 0.0;

  if (!(std::cin >> total.bookNo >> total.units_sold >> price)) {
    std::cerr << "No data?!" << std::endl;
    return -1;
  }

  total.revenue = total.units_sold * price;

  while (std::cin >> trans.bookNo >> trans.units_sold >> price) {
    trans.revenue = trans.units_sold * price;

    if (total.bookNo == trans.bookNo) {
      total.units_sold += trans.units_sold;
      total.revenue += trans.revenue;
    } else {
      std::cout << total.bookNo << " " << total.units_sold << " "
                << total.revenue << " " << total.revenue / total.units_sold
                << std::endl;
      total = trans;
    }
  }

  std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue
            << " " << total.revenue / total.units_sold << std::endl;
  return 0;
}
