# Day 2 - November 12, 2026

**Topic:** Loops with `if` (even and odd numbers) and my first debugging practice

## Files

| File | Loop | What it does |
| ---- | ---- | ------------ |
| [`even_num_only.cpp`](even_num_only.cpp) | `for` | Prints the even numbers from 1 to 20 |
| [`even_num_only2.cpp`](even_num_only2.cpp) | `while` | Same as above, but with a `while` loop. **Doesn't compile yet** (see below) |
| [`fix_bugs.cpp`](fix_bugs.cpp) | `for` | Debugging practice: adds the even numbers from 1 to 10 and prints `Sum: 30` |
| [`total_odd_num.cpp`](total_odd_num.cpp) | `for` | Counts numbers from 0 to 50 with an `if`. **Prints 26, which is the count of even numbers** (see below) |
| [`total_odd_num2.cpp`](total_odd_num2.cpp) | `while` | Counts odd numbers with a `while` loop. **Prints 24, but there are 25 odd numbers from 1 to 50** (see below) |

## What I learned

- Putting an `if` inside a loop lets me pick which numbers to use
  - `i % 2 == 0` means even
  - `i % 2 == 1` means odd
- `==` compares two values, `=` assigns a value. Using `=` inside an `if` is a bug.
- A counter: start `count` at `0` and do `++count` every time the condition is true
- A running total: `sum += i`
- Print the total **outside** the loop, or it prints on every round
- `for` when I know the range, `while` when I don't
- `i++` and `++count` both add 1
- `fix_bugs.cpp` had 2 bugs: `=` instead of `==`, and the `cout` was inside the loop

## Things to fix

- `even_num_only2.cpp`: line 1 has a stray `--`. Delete it and the file compiles.
- `total_odd_num.cpp`: it checks `i % 2 == 0`, which counts even numbers (0, 2, 4, ... 50 = 26 numbers), but the output says "Odd numbers". Use `i % 2 == 1` to count the 25 odd numbers.
- `total_odd_num2.cpp`: `i++` happens before the check, so the loop checks 2 to 50 and skips 1. Starting with `int i = 0;` makes it check 1 to 50.
