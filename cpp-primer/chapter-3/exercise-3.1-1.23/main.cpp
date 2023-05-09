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
  Sales_data currItem, item;
  double price = 0.0;

  if (!(cin >> item.bookNo >> item.units_sold >> price)) {
    cerr << "No data?!" << endl;
    return -1;
  }

  int cnt = 1;

  while (cin >> currItem.bookNo >> currItem.units_sold >> price) {
    if (item.bookNo == currItem.bookNo) {
      ++cnt;
    } else {
      cout << item.bookNo << " occurs " << cnt << " times" << endl;
      item = currItem;
      cnt = 1;
    }
  }
  cout << item.bookNo << " occurs " << cnt << " times" << endl;
  return 0;
}
