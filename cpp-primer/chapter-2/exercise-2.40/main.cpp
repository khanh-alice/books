#include <iostream>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main() {
  Sales_data data{"978-0590353403", 25, 15.99};
  std::cout << data.bookNo << " " << data.units_sold << " " << data.revenue
            << std::endl;
  return 0;
}
