#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string s;
  cin >> s;

  string result;
  for (auto c : s) {
    if (!ispunct(c)) {
      result += c;
    }
  }
  cout << result << endl;
  return 0;
}
