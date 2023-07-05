#include <iostream>

using std::cout;
using std::endl;

constexpr size_t row_size = 3, col_size = 4;

int main() {
  int ia[row_size][col_size] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};

  for (const int(&row)[col_size] : ia) {
    for (int col : row) {
      cout << col << " ";
    }
    cout << endl;
  }
  return 0;
}
