#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data {
  string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main() {
  Sales_data currData;
  double price = 0.0;

  while (cin >> currData.bookNo >> currData.units_sold >> price) {
    currData.revenue = currData.units_sold * price;
    cout << currData.bookNo << " " << currData.units_sold << " "
         << currData.revenue << " " << price << endl;
  }
  return 0;
}
