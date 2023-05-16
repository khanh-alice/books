# Chapter 3: Strings, Vectors, and Arrays

## Highlights

> Code inside headers ordinarily should not use `using` declarations. The reason is that the contents of a header are
> copied into the including program's text. (p. 83)

> You can avoid problems due to conversion between `unsigned` and `int` by not using `int`s in expressions that
> use `size()`. (p. 88)

> For historical reasons, and for compatibility with C, string literals are `not` standard library `string`s. It is
> important to remember that these types differ when you use string literals and library `string`s. (p. 90)

> The result of using an out-of-range subscript is undefined.
>
> (p. 95)

## Exercises

### Exercise 3.1

* [Exercise 1.9](exercise-3.1-1.9/main.cpp)
* [Exercise 1.10](exercise-3.1-1.10/main.cpp)
* [Exercise 1.11](exercise-3.1-1.11/main.cpp)
* [Exercise 1.20](exercise-3.1-1.20/main.cpp)
* [Exercise 1.21](exercise-3.1-1.21/main.cpp)
* [Exercise 1.22](exercise-3.1-1.22/main.cpp)
* [Exercise 1.23](exercise-3.1-1.23/main.cpp)
* [Exercise 1.25](exercise-3.1-1.25/main.cpp)

### Exercise 3.2

1. [Exercise 3.2.1](exercise-3.2.1/main.cpp)
2. [Exercise 3.2.2](exercise-3.2.2/main.cpp)

### Exercise 3.3

> The `string` input operator reads and discards any leading whitespace (e.g., spaces, newlines, tabs). It then reads
> characters until the next whitespace character is encountered.
>
> (p. 86)

> The `getline` function reads the given stream up to and including the first newline and stores what it read - not
> including the newline - in its `string` argument. After `getline` encounters a newline, even if it is the first
> character in the input, it stops reading and returns.
>
> (p. 87)

### Exercise 3.4

1. [Exercise 3.4.1](exercise-3.4.1/main.cpp)
2. [Exercise 3.4.2](exercise-3.4.2/main.cpp)

### Exercise 3.5

1. [Exercise 3.5.1](exercise-3.5.1/main.cpp)
2. [Exercise 3.5.2](exercise-3.5.2/main.cpp)

### [Exercise 3.6](exercise-3.6/main.cpp)

### [Exercise 3.7](exercise-3.7/main.cpp)

If we define the loop control variable as type `char`, the `string` will remain unchanged.

### Exercise 3.8

1. [Exercise 3.8.1](exercise-3.8.1/main.cpp)
2. [Exercise 3.8.2](exercise-3.8.2/main.cpp)

We would prefer to use a range `for` because we need to process every character in the `string`.

### Exercise 3.9

The program is not valid. The string `s` is empty, so `s[0]` is undefined.

### [Exercise 3.10](exercise-3.10/main.cpp)

### Exercise 3.11

The range `for` statement is legal. `c` is a `const char&`.

### Exercise 3.12

* (a) `vector<vector<int>> ivec;` is legal. `ivec` is a `vector` of `vector`s of `int`s.
* (b) `vector<string> svec = ivec;` is illegal. `svec` is a `vector` of `string`s, but `ivec` is a `vector` of `vector`s
  of `int`s.
* (c) `vector<string> svec(10, "null");` is legal. `svec` is a `vector` of `string`s with 10 elements with
  value `"null"`.

### Exercise 3.13

* (a) `vector<int> v1;` is empty.
* (b) `vector<int> v2(10);` has 10 elements with value `0`.
* (c) `vector<int> v3(10, 42);` has 10 elements with value `42`.
* (d) `vector<int> v4{10};` has 1 element with value `10`.
* (e) `vector<int> v5{10, 42};` has 2 elements with values `10` and `42`.
* (f) `vector<string> v6{10};` has 10 elements with value `""`.
* (g) `vector<string> v7{10, "hi"};` has 10 elements with value `"hi"`.
