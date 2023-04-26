# Chapter 1

## Highlights

> An incorrect comment is worse than no comment at all because it may mislead the reader. (p. 9)

## Exercises

### [Exercise 1.1](exercise-1.1/main.cpp)

### [Exercise 1.2](exercise-1.2/main.cpp)

```console
$ g++ main.cpp
$ ./a.out
$ echo $?
255
```

### [Exercise 1.3](exercise-1.3/main.cpp)

### [Exercise 1.4](exercise-1.4/main.cpp)

### [Exercise 1.5](exercise-1.5/main.cpp)

### [Exercise 1.6](exercise-1.6/main.cpp)

```c++
std::cout << "The sum of " << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;
```

The program is not legal. The second and third lines are missing the left operand of the `<<` operator.

### Exercise 1.7

```c++
/*
 * comment pairs /* */ cannot nest.
 */
int main() { return 0; }
```

```console
$ g++ main.cpp
main.cpp:2:18: warning: '/*' within block comment [-Wcomment]
 * comment pairs /* */ cannot nest.
                 ^
main.cpp:2:24: error: unknown type name 'cannot'
 * comment pairs /* */ cannot nest.
                       ^
main.cpp:2:35: error: expected ';' after top level declarator
 * comment pairs /* */ cannot nest.
                                  ^
                                  ;
1 warning and 2 errors generated.
```

### [Exercise 1.8](exercise-1.8/main.cpp)

```c++
std::cout << "/*";
std::cout << "*/";
std::cout << /* "*/" */;
std::cout << /* "*/" /* "/*" */;
```

The first, second and fourth statements are legal. The third statement is not legal. The closing `"` is missing.

### [Exercise 1.9](exercise-1.9/main.cpp)

### [Exercise 1.10](exercise-1.10/main.cpp)

### [Exercise 1.11](exercise-1.11/main.cpp)

### [Exercise 1.12](exercise-1.12/main.cpp)

```c++
int sum = 0;
for (int i = -100; i <= 100; ++i)
  sum += i;
```

This for loop sums all the integers from -100 to 100. The final `sum` is 0.

### [Exercise 1.13](exercise-1.13/main.cpp)

### Exercise 1.14

#### For

`for` loops are generally used for loops that iterate a specific number of times or over a specific range of values.
They have a fixed initialization, condition and increment expression. For example:

```c++
for (int i = 0; i < 10; ++i) {
  // loop body
}
```

##### Advantages

* `for` loops are generally more concise than `while` loops for iterating over a specific range of values.
* The initialization, condition, and increment expression are all located in one place,
  which can make the loop easier to read and understand.

##### Disadvantages

* `for` loops can be more cumbersome to use when the loop iteration logic is more complex than a simple range iteration.
* `for` loops can be less flexible than `while` loops because they require the initialization and increment expression
  to be specified.

#### While

`while` loops are generally used for loops that iterate while a certain condition is true. They don't have a fixed
initialization or increment expression. For example:

```c++
int i = 0;
while (i < 10) {
  // loop body
  ++i;
}
```

##### Advantages

* `while` loops are generally more flexible than `for` loops because they don't have a fixed initialization or increment
  expression. This can be useful for loops that need to iterate until a certain condition is met.
* `while` loops can be used to iterate over data structures that don't have a fixed size or range.

##### Disadvantages

* `while` loops can be less concise than `for` loops for iterating over a specific range of values.
* `while` loops can be more error-prone than `for` loops because they don't have a fixed initialization or increment
  expression, which can make it easier to introduce bugs or off-by-one errors.

### Exercise 1.15

#### Syntax errors

##### error: missing ) in parameter list for main

```c++
int main( {
  return 0;
}
```

```console
$ g++ main.cpp
main.cpp:1:1: error: main cannot be declared as global variable
int main( {
^
main.cpp:1:11: error: expected expression
int main( {
          ^
main.cpp:3:2: error: expected ';' after top level declarator
}
 ^
 ;
3 errors generated.
```

##### error: used colon, not a semicolon, after endl

```c++
#include <iostream>

int main() {
  std::cout << "Read each file." << std::endl:
  return 0;
}
```

```console
$ g++ main.cpp
main.cpp:4:46: error: expected ';' after expression
  std::cout << "Read each file." << std::endl:
                                             ^
                                             ;
1 error generated.
```

##### error: missing quotes around string literal

```c++
#include <iostream>

int main() {
  std::cout << "Read each file." << std::endl;
  std::cout << Update master. << std::endl;
  return 0;
}
```

```console
$ g++ main.cpp
main.cpp:5:22: error: expected ';' after expression
  std::cout << Update master. << std::endl;
                     ^
                     ;
main.cpp:5:16: error: use of undeclared identifier 'Update'
  std::cout << Update master. << std::endl;
               ^
main.cpp:5:23: error: use of undeclared identifier 'master'
  std::cout << Update master. << std::endl;
                      ^
main.cpp:5:31: error: expected unqualified-id
  std::cout << Update master. << std::endl;
                              ^
4 errors generated.
```

##### error: missing ; on return statement

```c++
#include <iostream>

int main() {
  std::cout << "Read each file." << std::endl;
  std::cout << "Update master." << std::endl;
  std::cout << "Write new master." std::endl;
  return 0;
}
```

```console
$ g++ main.cpp
main.cpp:6:35: error: expected ';' after expression
  std::cout << "Write new master." std::endl;
                                  ^
                                  ;
main.cpp:6:36: error: reference to overloaded function could not be resolved; did you mean to call it?
  std::cout << "Write new master." std::endl;
                                   ^~~~~~~~~
/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/c++/v1/ostream:1037:1: note: possible target for call
endl(basic_ostream<_CharT, _Traits>& __os)
^
2 errors generated.
```

##### error: missing ; on return statement

```c++
#include <iostream>

int main() {
  std::cout << "Read each file." << std::endl;
  std::cout << "Update master." << std::endl;
  std::cout << "Write new master." << std::endl;
  return 0
}
```

```console
$ g++ main.cpp
main.cpp:7:11: error: expected ';' after return statement
  return 0
          ^
          ;
1 error generated.
```

#### Type errors

```c++
int add(int x, int y) {
  return x + y;
}

int main() {
  int sum = add("hello", "world");
  return 0;
}
```

```console
$ g++ main.cpp           
main.cpp:6:13: error: no matching function for call to 'add'
  int sum = add("hello", "world");
            ^~~
main.cpp:1:5: note: candidate function not viable: no known conversion from 'const char[6]' to 'int' for 1st argument
int add(int x, int y) {
    ^
1 error generated.
```

#### Declaration errors

##### error: uses "v" not "v1"

```c++
#include <iostream>

int main() {
  int v1 = 0, v2 = 0;
  std::cin >> v >> v2;
  return 0;
}
```

```console
$ g++ main.cpp
main.cpp:5:15: error: use of undeclared identifier 'v'
  std::cin >> v >> v2;
              ^
1 error generated.
```

##### error: cout not defined; should be std::cout

```c++
#include <iostream>

int main() {
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  cout << v1 + v2 << std::endl;
  return 0;
}
```

```console
$ g++ main.cpp
main.cpp:6:3: error: use of undeclared identifier 'cout'; did you mean 'std::cout'?
  cout << v1 + v2 << std::endl;
  ^~~~
  std::cout
/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/c++/v1/iostream:53:33: note: 'std::cout' declared here
extern _LIBCPP_FUNC_VIS ostream cout;
                                ^
1 error generated.
```

### [Exercise 1.16](exercise-1.16/main.cpp)

### Exercise 1.17

* If the input values are all equal, the program will print once with the number of times the value was entered.
* If there are no duplicated values, the program will print every time a new number was entered with the number of times
  of 1.

### [Exercise 1.18](exercise-1.18/main.cpp)

```console
$ g++ main.cpp
$ echo 1 1 1 1 1 | ./a.out
1 occurs 5 times
$ echo 1 2 3 4 5 | ./a.out
1 occurs 1 times
2 occurs 1 times
3 occurs 1 times
4 occurs 1 times
5 occurs 1 times
```

### [Exercise 1.19](exercise-1.19/main.cpp)

### [Exercise 1.20](exercise-1.20/main.cpp)

### [Exercise 1.21](exercise-1.21/main.cpp)

### [Exercise 1.22](exercise-1.22/main.cpp)

### [Exercise 1.23](exercise-1.23/main.cpp)

### Exercise 1.24

```console
$ g++ -std=c++11 main.cpp
$ echo 0-201-70353-X 4 24.99 0-201-78345-X 3 20.00 0-201-78345-X 2 25.00 | ./a.out
0-201-70353-X occurs 1 times
0-201-78345-X occurs 2 times
```

### [Exercise 1.25](exercise-1.25/main.cpp)

```console
$ g++ -std=c++11 main.cpp
$ echo 0-201-70353-X 4 24.99 0-201-78345-X 3 20.00 0-201-78345-X 2 25.00 | ./a.out
0-201-70353-X 4 99.96 24.99
0-201-78345-X 5 110 22
```
