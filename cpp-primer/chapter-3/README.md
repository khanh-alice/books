# Chapter 3: Strings, Vectors, and Arrays

## Highlights

> Code inside headers ordinarily should not use `using` declarations. The reason is that the contents of a header are
> copied into the including program's text. (p. 83)

> You can avoid problems due to conversion between `unsigned` and `int` by not using `int`s in expressions that
> use `size()`. (p. 88)

> For historical reasons, and for compatibility with C, string literals are `not` standard library `string`s. It is
> important to remember that these types differ when you use string literals and library `string`s. (p. 90)

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
