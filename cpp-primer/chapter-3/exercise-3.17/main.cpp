#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  vector<string> words;
  string word;

  while (cin >> word) {
    words.push_back(word);
  }

  for (auto &w : words) {
    for (auto &c : w) {
      c = (char)toupper(c);
    }
  }

  for (decltype(words.size()) i = 0; i < words.size(); ++i) {
    cout << words[i] << " ";
    if ((i + 1) % 8 == 0) {
      cout << endl;
    }
  }

  return 0;
}
