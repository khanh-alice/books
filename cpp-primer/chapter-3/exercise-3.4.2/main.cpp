#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string s1, s2;
  cin >> s1 >> s2;

  const auto s1Size = s1.size();
  const auto s2Size = s2.size();

  if (s1Size == s2Size) {
    cout << "Strings have the same length" << endl;
    return 0;
  }

  if (s1Size > s2Size) {
    cout << s1 << " is longer than " << s2 << endl;
  } else {
    cout << s2 << " is longer than " << s1 << endl;
  }
  return 0;
}
