#include <iostream>

using std::cout;
using std::vector;

int main() {
  vector<int> iv = {0, 1, 2, 3, 4, 5};

  int ia[iv.size()];
  for (decltype(iv.size()) i = 0; i < iv.size(); ++i) {
    ia[i] = iv[i];
  }

  for (auto i : ia) {
    cout << i << " ";
  }
  return 0;
}
