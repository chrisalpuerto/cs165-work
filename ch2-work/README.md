# CH 2 Work

This folder contains the C program for the Chapter 2 homework.

## Files

- `main.c`: Source code for the program.
- `run_tests.sh`: Script that compiles the program and runs sample test cases.
- `main`: Compiled program.

## Compile the Program

From the `ch2-work` folder, run:

```sh
gcc -Wall -Wextra -Werror main.c -o main
```

## Run the Program

After compiling, run:

```sh
./main
```

The program will ask for:

1. Two integers for quotient and remainder.
2. One integer to check if it is even.
3. The length and width of a rectangle.

## Run the Tests

From the `ch2-work` folder, run:

```sh
./run_tests.sh
```

The test script compiles `main.c` and runs sample input values through the program.
