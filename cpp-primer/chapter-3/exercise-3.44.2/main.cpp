#include <iostream>

using std::cout;
using std::endl;

constexpr size_t row_size = 3, col_size = 4;

using int_array = int[col_size];

int main() {
  int_array ia[row_size] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};

  for (size_t i = 0; i < row_size; ++i) {
    for (size_t j = 0; j < col_size; ++j) {
      cout << ia[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
