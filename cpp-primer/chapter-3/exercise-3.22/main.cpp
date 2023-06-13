#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::vector;

int main() {
  string line;
  vector<string> text;
  while (getline(cin, line)) {
    text.push_back(line);
  }

  for (auto i = text.begin(); i != text.end() && !i->empty(); ++i) {
    for (auto j = i->begin(); j != i->end(); ++j) {
      *j = (char)toupper(*j);
    }
  }

  for (auto i = text.cbegin(); i != text.cend(); ++i) {
    cout << *i << endl;
  }
  return 0;
}
