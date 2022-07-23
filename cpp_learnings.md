# C++ Learnings

## Arrays
- Declaration example: `int foo [5];`
- Elements are placed in contiguous memory locations
- Arrays are blocks of static memory locations whose size must be
determined at compile time
  - Thus, must ensure that the number in brackets is a constant
  expression
- The default type for fundamental values in an array is zeros, but you
can also initialize with certain values in brackets.
  - Both valid declarations:

        ```c++
        int foo[] = { 10, 20, 30 };
        int foo[] { 10, 20, 30 };
        ```
- Indexing into an out-of-range element of an array causes a runtime
error, but not a compile-time error.
