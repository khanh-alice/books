#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  int num;
  vector<int> nums;

  while (cin >> num) {
    nums.push_back(num);
  }

  for (auto i = nums.cbegin(); i != nums.cend() - 1; ++i) {
    cout << *i + *(i + 1) << " ";
  }
  return 0;
}
