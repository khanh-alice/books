#include <iostream>

int main() {
  int i = 0, &r = i;
  auto a = r;

  const int ci = i, &cr = ci;
  auto b = ci;
  auto c = cr;
  auto d = &i;
  auto e = &ci;
  const auto f = ci;
  auto &g = ci;

  std::cout << "before assigning, a: " << a << std::endl;
  a = 42;
  std::cout << "after assigning, a: " << a << std::endl;

  std::cout << "before assigning, b: " << b << std::endl;
  b = 42;
  std::cout << "after assigning, b: " << b << std::endl;

  std::cout << "before assigning, c: " << c << std::endl;
  c = 42;
  std::cout << "after assigning, c: " << c << std::endl;

  // error: incompatible integer to pointer conversion assigning
  // to 'int *' from 'int'
  //  d = 42;
  // error: incompatible integer to pointer conversion assigning
  // to 'const int *' from 'int'
  //  e = 42;
  // error: cannot assign to variable 'g'
  // with const-qualified type 'const int &'
  //  g = 42;

  return 0;
}
