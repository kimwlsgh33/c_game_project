# variables in Headers

## ODR

One Definition Rule

Each entity (such as a variable, function, or class) must have exactly one definition within a program.

Violating the One Definition Rule can lead to undefined behavior.

### Solution

Wrap surround

```c
#ifndef
#define HEADER_H
x = 10;
#endif
```
