#include <iostream>

using std::begin;
using std::cout;
using std::end;
using std::vector;

int main() {
  int ia[] = {0, 1, 2, 3, 4, 5};
  vector<int> iv(begin(ia), end(ia));

  for (const auto &i : iv) {
    cout << i << " ";
  }
  return 0;
}
