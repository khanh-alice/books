#include <iostream>

using std::cout;
using std::endl;

using int_array = int[4];

int main() {
  int_array ia[3] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};

  for (const int_array &row : ia) {
    for (int col : row) {
      cout << col << " ";
    }
    cout << endl;
  }
  return 0;
}
