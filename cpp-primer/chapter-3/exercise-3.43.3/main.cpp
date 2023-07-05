#include <iostream>

using std::begin;
using std::cout;
using std::end;
using std::endl;

int main() {
  int ia[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};

  for (int(*row)[4] = begin(ia); row != end(ia); ++row) {
    for (int *col = begin(*row); col != end(*row); ++col) {
      cout << *col << " ";
    }
    cout << endl;
  }
  return 0;
}
