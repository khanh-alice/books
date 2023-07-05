#include <iostream>

using std::begin;
using std::cout;
using std::end;
using std::endl;

constexpr size_t row_size = 3, col_size = 4;

using int_array = int[col_size];

int main() {
  int_array ia[row_size] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};

  for (auto *row = begin(ia); row != end(ia); ++row) {
    for (auto *col = begin(*row); col != end(*row); ++col) {
      cout << *col << " ";
    }
    cout << endl;
  }
  return 0;
}
