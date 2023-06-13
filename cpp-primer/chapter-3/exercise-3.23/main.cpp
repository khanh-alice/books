#include <iostream>

using std::cout;
using std::vector;

int main() {
  vector<int> nums{4, 45, 93, 5, 47, 46, 61, 78, 53, 97};
  for (auto num = nums.begin(); num != nums.end(); ++num) {
    *num *= 2;
  }
  for (auto num : nums) {
    cout << num << " ";
  }
  return 0;
}
