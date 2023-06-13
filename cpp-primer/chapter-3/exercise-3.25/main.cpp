#include <iostream>

using std::cin;
using std::vector;

int main() {
  vector<unsigned> scores(11, 0);
  unsigned grade;
  while (cin >> grade) {
    if (grade <= 100) {
      auto score = scores.begin() + (grade / 10);
      ++*score;
    }
  }

  for (auto i = scores.cbegin(); i != scores.cend(); ++i) {
    std::cout << *i << " ";
  }
  return 0;
}
