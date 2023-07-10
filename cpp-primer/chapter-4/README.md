# Chapter 4: Expressions

## Highlights

> Order of evaluation for most of the binary operators is left undefined to give the compiler opportunities for
> optimization.
>
> (p. 138)

> When you write compound expressions, two rules of thumb can be helpful:
>
> 1. When in doubt, parenthesize expressions to force the grouping that the logic of your program requires.
> 2. If you change the value of an operand, don't use that operand elsewhere in the same expression.
>
> An important exception to the second rule occurs when the subexpression that change the operand is itself the operand
> of another subexpression.
>
> (p. 139)

## Exercises

### Exercise 4.1

It returns `105`

### Exercise 4.2

* (a) `*((vec.begin)())`
* (b) `(*((vec.begin)()))+1`

### Exercise 4.3

Yes, because we should not rely on the order of evaluation of the operands of operators when writing expressions. It is
best practice to evaluate the operands first in the order that we want before using them in the expression.

### [Exercise 4.4](exercise-4.4/main.cpp)

(((12 / 3) * 4) + (5 * 15)) + ((24 % 4) / 2)

### Exercise 4.5

* (a) -86
* (b) -18
* (c) 0
* (d) -2

### Exercise 4.6

```c++
int i;
bool is_even = i % 2 == 0;
```

### Exercise 4.7

> Overflow happens when a value is computed that is outside the range of values that the type can represent.
> 
> (p. 140)

```c++
short s = 32767;
++s;
```

```c++
unsigned u = 0;
--u;
```

```c++
unsigned short us = 65535;
++us;
```