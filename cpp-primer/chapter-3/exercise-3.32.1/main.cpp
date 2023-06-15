#include <iostream>

using std::cout;

int main() {
  constexpr size_t array_size = 10;
  int ia[array_size];

  for (size_t ix = 0; ix < array_size; ++ix) {
    ia[ix] = ix;
  }

  int ia2[array_size];
  for (size_t ix = 0; ix < array_size; ++ix) {
    ia2[ix] = ia[ix];
  }

  for (auto i : ia2) {
    cout << i << " ";
  }
  return 0;
}
