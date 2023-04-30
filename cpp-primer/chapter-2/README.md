# Chapter 2: Variables and Basic Types

## Highlights

> C++ is a _statically typed_ language, which means that types are checked at compile time. (p. 46)

> Naming conventions are most useful when followed consistently. (p. 47)

> It is almost always a bad idea to define a local variable with the same name as a global variable that the function
> uses or might use. (p. 49)
 
> **A Reference is an Alias**
> 
> A reference is not an object. Instead, a reference is _just another name for an already existing object_. (p. 50)

> Because references are not objects, we may not define a reference to a reference. (p. 51)

## Exercises

### Exercise 2.1

* `int`, `long`, `long long`, and `short` are all integer types. The difference between them is their size. `short`'s
  minimum size is 16 bits, `int`'s minimum size is 16 bits, `long`'s minimum size is 32 bits, and `long long`'s minimum
  size is 64 bits.

* An unsigned type can only represent values greater than or equal to zero. A signed type can represent both positive
  and negative values.

* `float` and `double` are both floating-point types. `float` is usually 32 bits and `double` is usually 64 bits.

### Exercise 2.2

To calculate a mortgage payment, we would use `double` for the rate, principal, and payment. It is because all of these
can be a decimal number.

### [Exercise 2.3](exercise-2.3/main.cpp)

The output would be:

```console
32
4294967264
32
-32
0
0
```

### [Exercise 2.4](exercise-2.4/main.cpp)

### Exercise 2.5

#### (a)

`'a', L'a', "a", L"a"` are character and character string literals.

| Literal | Type         | Value         |
|---------|--------------|---------------|
| `'a'`   | `char`       | `'a' `        |
| `L'a'`  | `wchar_t`    | `'a'`         |
| `"a"`   | `char[2]`    | `['a', '\0']` |
| `L"a"`  | `wchar_t[2]` | `['a', '\0']` |

#### (b)

`10, 10u, 10L, 10uL, 012, 0xC` are integer literals.

| Literal | Type            | Value |
|---------|-----------------|-------|
| `10`    | `int`           | `10`  |
| `10u`   | `unsigned int`  | `10`  |
| `10L`   | `long`          | `10`  |
| `10uL`  | `unsigned long` | `10`  |
| `012`   | `int`           | `10`  |
| `0xC`   | `int`           | `12`  |

#### (c)

`3.14, 3.14f, 3.14L` are floating-point literals.

| Literal | Type          | Value  |
|---------|---------------|--------|
| `3.14`  | `double`      | `3.14` |
| `3.14f` | `float`       | `3.14` |
| `3.14L` | `long double` | `3.14` |

#### (d)

`10, 10u` are integer literals.

`10., 10e-2` are floating-point literals.

| Literal | Type           | Value  |
|---------|----------------|--------|
| `10`    | `int`          | `10`   |
| `10u`   | `unsigned int` | `10`   |
| `10.`   | `double`       | `10.0` |
| `10e-2` | `double`       | `0.1`  |

### Exercise 2.6

```c++
int month = 9, day = 7;
```

`month` and `day` are integer literals written in decimal.

```c++
int month = 09, day = 07;
```

`month` and `day` are integer literals written in octal. However, `09` is not a valid octal number.

### Exercise 2.7

|     | Literal                          | Type          | Value                                                                                                              |
|-----|----------------------------------|---------------|--------------------------------------------------------------------------------------------------------------------|
| (a) | `"Who goes with F\145rgus?\012"` | `char[23]`    | `['W', 'h', 'o', ' ', 'g', 'o', 'e', 's', ' ', 'w', 'i', 't', 'h', ' ', 'F', 'e', 'r', 'g', 'u', 's', '\n', '\0']` |
| (b) | `3.14e1L`                        | `long double` | `31.4`                                                                                                             |
| (c) | `1024f`                          | `float`       | `error: invalid digit 'f' in decimal constant`                                                                     |
| (d) | `3.14L`                          | `long double` | `3.14`                                                                                                             |

### [Exercise 2.8](exercise-2.8/main.cpp)

### [Exercise 2.9](exercise-2.9/main.cpp)

#### (a)

```c++
std::cin >> int input_value; // error: expected '(' for function-style cast or type construction
```

`input_value` is an `int` variable. This is illegal because we need to define the variable before we can use it.

#### (b)

```c++
int i = { 3.14 }; // error: type 'double' cannot be narrowed to 'int' in initializer list
```

`i` is an `int` variable. This is illegal because list initialization does not allow narrowing conversions from `double`
to `int`.

#### (c)

```c++
double salary = wage = 9999.99; //  error: use of undeclared identifier 'wage'
```

`salary` is a `double` variable. This is illegal because `wage` is not defined.

#### (d)

```c++
int i = 3.14 // warning: implicit conversion from 'double' to 'int' changes value from 3.14 to 3
```

`i` is an `int` variable. This is legal but the value of `i` will be truncated to `3`.

### [Exercise 2.10](exercise-2.10/main.cpp)

Initial value of `global_str` and `local_str` is an empty string.

Initial value of `global_int` is `0`

Initial value of `local_int` is undefined.

### Exercise 2.11

* (a) `extern int ix = 1024;` is a definition.
* (b) `int iy;` is a definition.
* (c) `extern int iz;` is a declaration.

### Exercise 2.12

* (a) `int double = 3.14;` is invalid because `double` is a keyword.
* (b) `int _;` is valid.
* (c) `int catch-22;` is invalid because `-` is not allowed in variable name.
* (d) `int 1_or_2 = 1;` is invalid because variable name cannot start with a digit.
* (e) `double Double = 3.14;` is valid.

### [Exercise 2.13](exercise-2.13/main.cpp)

`j` is 100.

### [Exercise 2.14](exercise-2.14/main.cpp)

The program is legal. It will print `100 45`.

### Exercise 2.15

* (a) `int ival = 1.01;` is valid but the value will be truncated to `1`.
* (b) `int &rval1 = 1.01;` is invalid because we cannot bind a reference to a literal.
* (c) `int &rval2 = ival;` is valid assuming `ival` is an `int` variable.
* (d) `int &rval3;` is invalid because we need to initialize a reference.

### [Exercise 2.16](exercise-2.16/main.cpp)

* (a) `r2 = 3.14159;` is valid. `3.14159` will be assigned to variable `d`.
* (b) `r2 = r1;` is valid. Value `0` of variable `i` will be assigned to variable `d`.
* (c) `i = r2;` is valid. Value `0.0` of variable `d` will be truncated to `0` and assigned to variable `i`.
* (d) `r1 = d;` is valid. Value `0.0` of variable `d` will be assigned to variable `i`.
