#include <cstring>
#include <iostream>

int main() {
  const char s1[] = "A string example";
  const char s2[] = "A different string";
  char s3[strlen(s1) + strlen(s2) + 1];

  strcpy(s3, s1);
  strcat(s3, s2);

  std::cout << s3 << std::endl;
  return 0;
}
