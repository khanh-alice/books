#include <iostream>

using std::cin;
using std::vector;

int main() {
  vector<int> v;
  int i = 0;
  while (cin >> i) {
    v.push_back(i);
  }
  return 0;
}
