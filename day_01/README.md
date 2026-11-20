# Day 1 - November 12, 2026

**Topic:** Loops (`for`, `while`, `do-while`)

My first day with loops. A loop repeats code so I don't have to write the same line again and again.

## Files

| File | Loop | What it does |
| ---- | ---- | ------------ |
| [`count_to_ten.cpp`](count_to_ten.cpp) | `for` | Prints 1 to 10, then prints `Done!` |
| [`countdown.cpp`](countdown.cpp) | `for` | Counts down from 10 to 1, then prints `Liftoff!` |
| [`first_while_loop.cpp`](first_while_loop.cpp) | `while` | A `while` loop with `i++` commented out, so it never stops (infinite loop) |
| [`first_do_while.cpp`](first_do_while.cpp) | `do-while` | Prints `10` once, even though the condition `i <= 5` is false |
| [`sum_of_the_num.cpp`](sum_of_the_num.cpp) | `for` | Adds the numbers 0 to 10 and prints `Total: 55` |
| [`sum_of_the_num2.cpp`](sum_of_the_num2.cpp) | `while` | Same sum as above, but using a `while` loop |

## What I learned

- **`for` loop:** `for (start; condition; update)`
  - `int i = 1` is where it starts
  - `i <= 10` is the condition, the loop keeps going while it's true
  - `i++` adds 1 each time, `i--` subtracts 1 (for counting down)
- **`while` loop:** checks the condition first, then runs the code. If I forget to change `i` inside, it runs forever.
- **`do-while` loop:** runs the code first, then checks the condition, so it always runs at least once. The `while (...)` comes after the `do { }` and ends with a `;`.
- **`sum += i`** means `sum = sum + i`. It's how I add up numbers (a running total).
- **`++i` vs `i++`:** both add 1. In a simple loop they work the same.
- `'\n'` prints a new line (same idea as `endl`).

## Notes to self

- Start `sum` at `0` before the loop, or the total will be wrong.
- `first_while_loop.cpp` is on purpose: it shows what happens without the update. To fix it, uncomment `i++;`.
- `for` is best when I know how many times to repeat, `while` when I don't, `do-while` when it must run at least once.
