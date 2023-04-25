# Chapter 1

## Highlights

> An incorrect comment is worse than no comment at all because it may mislead the reader. (p. 9)

## Exercises

### Exercise 1.2

```shell
$ ./exercise-1.2
$ echo $?
255
```

### Exercise 1.6

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

```shell
$ c++ main.cpp
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

### Exercise 1.8

```c++
std::cout << "/*";
std::cout << "*/";
std::cout << /* "*/" */;
std::cout << /* "*/" /* "/*" */;
```

The first, second and fourth statements are legal. The third statement is not legal. The closing `"` is missing.

### Exercise 1.12

```c++
int sum = 0;
for (int i = -100; i <= 100; ++i)
  sum += i;
```

This for loop sums all the integers from -100 to 100. The final `sum` is 0.

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
