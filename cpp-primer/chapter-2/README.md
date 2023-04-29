# Chapter 2: Variables and Basic Types

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

### Exercise 2.3

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
