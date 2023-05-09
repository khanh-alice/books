#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  cout << "Enter two numbers:" << endl;
  int v1 = 0, v2 = 0;
  cin >> v1 >> v2;

  cout << "The numbers between " << v1 << " and " << v2 << " are: " << endl;
  int val = v1;
  while (val <= v2) {
    cout << val << endl;
    ++val;
  }
  val = v2;
  while (val <= v1) {
    cout << val << endl;
    ++val;
  }
  return 0;
}
