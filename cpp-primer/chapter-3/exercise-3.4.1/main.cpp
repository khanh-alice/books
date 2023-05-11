#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string s1, s2;
  cin >> s1 >> s2;

  if (s1 == s2) {
    cout << "Strings are equal" << endl;
    return 0;
  }

  if (s1 > s2) {
    cout << s1 << " is larger than " << s2 << endl;
  } else {
    cout << s2 << " is larger than " << s1 << endl;
  }
  return 0;
}
