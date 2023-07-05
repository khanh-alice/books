#include <iostream>

using std::cout;
using std::endl;

constexpr size_t row_cnt = 3, col_cnt = 4;

int main() {
  int ia[row_cnt][col_cnt] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};

  for (size_t i = 0; i < row_cnt; ++i) {
    for (size_t j = 0; j < col_cnt; ++j) {
      cout << ia[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
