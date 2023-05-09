#include <iostream>

using std::cerr;
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
  Sales_data curr, total;
  double price = 0.0;

  if (!(cin >> total.bookNo >> total.units_sold >> price)) {
    cerr << "No data?!" << endl;
    return -1;
  }

  total.revenue = total.units_sold * price;

  while (cin >> curr.bookNo >> curr.units_sold >> price) {
    total.bookNo = curr.bookNo;
    total.units_sold += curr.units_sold;
    total.revenue += curr.units_sold * price;
  }
  cout << total.bookNo << " " << total.units_sold << " " << total.revenue
            << " " << total.revenue / total.units_sold << endl;
  return 0;
}
