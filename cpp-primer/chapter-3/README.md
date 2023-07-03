# Chapter 3: Strings, Vectors, and Arrays

## Highlights

> Code inside headers ordinarily should not use `using` declarations.
> The reason is that the contents of a header are copied into the including program's text.
>
> (p. 83)

> You can avoid problems due to conversion between `unsigned` and `int` by not using `int`s in expressions that
> use `size()`.
>
> (p. 88)

> For historical reasons, and for compatibility with C, string literals are `not` standard library `string`s.
> It is important to remember that these types differ when you use string literals and library `string`s.
>
> (p. 90)

> The result of using an out-of-range subscript is undefined.
>
> (p. 95)

> Because `vector`s grow efficiently, it is often unnecessary - and can result in poorer performance - to define
> a `vector` of a specific size.
> The exception to this rule is if _all_ the elements actually need the same value.
> If difference element values are needed, it is usually more efficient to define an empty `vector` and add elements as
> the values we need become known at run time.
>
> (p. 101)

> It is crucially important to understand that we may use the subscript operator (the `[]` operator) to fetch only
> elements that actually exist.
>
> It is an error to subscript an element that doesn't exist, but it is an error that the compiler is unlikely to detect.
> Instead, the value we get at run time is undefined.
>
> A good way to ensure that subscripts are in range is to avoid subscripting altogether by using a range `for` whenever
> possible.
>
> (p. 105)

> If the container is empty, the iterators returned by `begin` and `end` are equal - they are both off-the-end
> iterators.
>
> (p. 106)

> Because the iterator returned from `end` does not denote an element, it may not be incremented or dereferenced.
>
> (p. 107)

> As with variables of built-in type, a default-initialized array of built-in type that is defined inside a function
> will have undefined value.
>
> (p. 113)

> We cannot initialize an array as a copy of another array, nor is it legal to assign one array to another.
>
> (p. 114)

> It can be easier to understand array declarations by starting with the array's name and reading them from the inside
> out.
>
> (p. 115)

> The most common source of security problems are buffer overflow bugs. Such bugs occur when a program fails to check a
> subscript and mistakenly uses memory outside the range of an array or similar data structure.
>
> (p. 116)

> In most expressions, when we use an object of array type, we are really using a pointer to the first element in that
> array.
>
> (p. 117)

> Computing a pointer more than one past the last element is an error, although the compiler is unlikely to detect such
> errors.
>
> (p. 120)

> Unlike subscripts for `vector` and `string`, the index of the built-in subscript operator is not an `unsigned` type.
>
> (p. 121)

> For most applications, in addition to being safer, it is also more efficient to use library `string`s rather than
> C-style strings.
>
> (p. 123)

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

### [Exercise 3.14](exercise-3.14/main.cpp)

### [Exercise 3.15](exercise-3.15/main.cpp)

### [Exercise 3.16](exercise-3.16/main.cpp)

### [Exercise 3.17](exercise-3.17/main.cpp)

### Exercise 3.18

The program is illegal because vector `ivec` is empty, so we cannot use `ivec[0]`. We should use `push_back` instead.

```cpp
vector<int> ivec;
ivec.push_back(42);
```

### Exercise 3.19

1. Use **value initialization** to create a `vector` with 10 elements, each with the value `42`.

    ```cpp
    vector<int> v1(10, 42);
    ```

2. Use **list initialization** to create a `vector` with 10 elements, each with the value `42`.

    ```cpp
    vector<int> v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    ```

3. Use `push_back` to add the value `42` to the `vector` until it has 10 elements.

    ```cpp
    vector<int> v3;
    for (int i = 0; i < 10; ++i) {
      v3.push_back(42);
    }
    ```

Using value initialization is preferred because all elements have the same value.

### Exercise 3.20

1. [Exercise 3.20.1](exercise-3.20.1/main.cpp)
2. [Exercise 3.20.2](exercise-3.20.2/main.cpp)

### [Exercise 3.21](exercise-3.21/main.cpp)

### [Exercise 3.22](exercise-3.22/main.cpp)

### [Exercise 3.23](exercise-3.23/main.cpp)

### Exercise 3.24

1. [Exercise 3.24.1](exercise-3.24.1/main.cpp)
2. [Exercise 3.24.2](exercise-3.24.2/main.cpp)

### [Exercise 3.25](exercise-3.25/main.cpp)

### Exercise 3.26

`(beg + end)` is illegal because there's no support for `+` operation between two iterators of `string`.

### Exercise 3.27

* (a) `int ia[buf_size];` is illegal because `buf_size` is not a constant expression.
* (b) `int ia[4 * 7 - 14];` is legal.
* (c) `int ia[txt_size()];` is illegal because `txt_size()` is not a constant expression.
* (d) `char st[11] = "fundamental";` is illegal because there's no space for the null character.

### Exercise 3.28

* `string sa[10];` has 10 empty strings.
* `int ia[10];` has 10 elements with value `0`.
* `string sa2[10];` has 10 empty strings.
* `int ia2[10];` has 10 elements with undefined value.

### Exercise 3.29

> Unlike a `vector`, arrays have fixed size; we cannot add elements to an array.
>
> (p. 113)

> We cannot initialize an array as a copy of another array, nor is it legal to assign one array to another.
>
> (p. 114)

### Exercise 3.30

Array `ia` has 10 elements so its index ranges from `0` to `9`. The loop however iterates from `1` to `10`, so the last
iteration is an indexing error because `ia[10]` is out of range.

### [Exercise 3.31](exercise-3.31/main.cpp)

### Exercise 3.32

1. [Exercise 3.32.1](exercise-3.32.1/main.cpp)
2. [Exercise 3.32.2](exercise-3.32.2/main.cpp)

### Exercise 3.33

If we did not initialize `scores` array, the values of `scores` will be undefined and the final result will be
inaccurate.

### Exercise 3.34

It changes the element that `p1` points to, to the element that `p2` points to, to that `p1` and `p2` point to the same
element in the array.

There are no values of `p1` or `p2` make the code illegal.

### [Exercise 3.35](exercise-3.35/main.cpp)

### Exercise 3.36

1. [Exercise 3.36.1](exercise-3.36.1/main.cpp)
2. [Exercise 3.36.2](exercise-3.36.2/main.cpp)

### Exercise 3.37

The program prints all characters in `ca`, and because `ca` is not null-terminated, the program will continue to print
some garbage characters until it reaches a null character.

### Exercise 3.38

Pointers are essentially memory addresses, so adding them will result in an address that is either invalid or an
un-relating address, which is both unsafe and meaningless.
