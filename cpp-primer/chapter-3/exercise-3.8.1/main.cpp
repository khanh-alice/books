#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string s;
  cin >> s;

  decltype(s.size()) i = 0;
  while (i < s.size()) {
    s[i] = 'X';
    ++i;
  }
  cout << s << endl;
  return 0;
}
