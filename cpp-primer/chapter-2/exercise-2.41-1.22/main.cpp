#include <iostream>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main() {
  Sales_data curr, total;
  double price = 0.0;

  if (!(std::cin >> total.bookNo >> total.units_sold >> price)) {
    std::cerr << "No data?!" << std::endl;
    return -1;
  }

  total.revenue = total.units_sold * price;

  while (std::cin >> curr.bookNo >> curr.units_sold >> price) {
    total.bookNo = curr.bookNo;
    total.units_sold += curr.units_sold;
    total.revenue += curr.units_sold * price;
  }
  std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue
            << " " << total.revenue / total.units_sold << std::endl;
  return 0;
}
