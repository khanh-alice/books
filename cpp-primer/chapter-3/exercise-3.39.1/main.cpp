#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main() {
  string s1 = "A string example";
  string s2 = "A different string";

  if (s1 < s2) {
    cout << "s1 is less than s2" << endl;
  } else if (s1 > s2) {
    cout << "s1 is greater than s2" << endl;
  } else {
    cout << "s1 is equal to s2" << endl;
  }
  return 0;
}
