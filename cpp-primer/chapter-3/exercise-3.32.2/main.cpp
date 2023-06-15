#include <iostream>

using std::cout;
using std::vector;

int main() {
  vector<int> iv(10, 0);
  for (decltype(iv.size()) i = 0; i < iv.size(); ++i) {
    iv[i] = i;
  }

  vector<int> iv2(iv);
  for (auto i : iv2) {
    cout << i << " ";
  }
  return 0;
}
