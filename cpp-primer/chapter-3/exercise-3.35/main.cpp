#include <iostream>
#include <iterator>

using std::begin;
using std::cout;
using std::end;

int main() {
  int ia[] = {0, 2, 4, 6, 8};

  for (int *b = begin(ia), *e = end(ia); b != e; ++b) {
    *b = 0;
  }

  for (auto i : ia) {
    cout << i << " ";
  }
  return 0;
}
