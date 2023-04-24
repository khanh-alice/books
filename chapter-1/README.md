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
