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

  for (decltype(nums.size()) i = 0; i < nums.size() - 1; ++i) {
    cout << nums[i] + nums[i + 1] << " ";
  }
  return 0;
}
