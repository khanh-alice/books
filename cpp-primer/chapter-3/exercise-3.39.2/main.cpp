#include <iostream>

using std::cout;
using std::endl;

int main() {
  const char s1[] = "A string example";
  const char s2[] = "A different string";

  if (strcmp(s1, s2) < 0) {
    cout << "s1 is less than s2" << endl;
  } else if (strcmp(s1, s2) > 0) {
    cout << "s1 is greater than s2" << endl;
  } else {
    cout << "s1 is equal to s2" << endl;
  }
  return 0;
}
