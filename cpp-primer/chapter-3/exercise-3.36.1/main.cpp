#include <iostream>

using std::begin;
using std::cout;
using std::end;
using std::endl;

int main() {
  int ia1[] = {1, 2, 3, 4, 5};
  int ia2[] = {1, 2, 3, 4, 6};

  int *b1 = begin(ia1), *e1 = end(ia1);
  int *b2 = begin(ia2), *e2 = end(ia2);

  if (e1 - b1 != e2 - b2) {
    cout << "Arrays are not equal." << endl;
    return 0;
  }

  while (b1 != e1 && b2 != e2) {
    if (*b1 != *b2) {
      cout << "Arrays are not equal." << endl;
      return 0;
    }
    ++b1;
    ++b2;
  }

  cout << "Arrays are equal." << endl;
  return 0;
}
