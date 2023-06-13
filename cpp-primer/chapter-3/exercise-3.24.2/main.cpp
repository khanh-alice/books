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

  for (auto i = nums.cbegin(); i != nums.cend(); ++i) {
    cout << *i + *(nums.cbegin() + (nums.cend() - 1 - i)) << " ";
  }
  return 0;
}
