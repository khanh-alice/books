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

The first, second and fourth statements are legal.
The third statement is not legal. The closing `"` is missing.
