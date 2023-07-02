#include <iostream>

using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> iv1 = {1, 2, 3, 4, 5};
  vector<int> iv2 = {1, 2, 3, 4, 6};

  if (iv1 != iv2) {
    cout << "Vectors are not equal." << endl;
    return 0;
  }

  cout << "Vectors are equal." << endl;
  return 0;
}
