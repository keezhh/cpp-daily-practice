# Day 8 - November 19, 2026

**Topic:** Input validation project (a `for` loop with a `do-while` inside)

## Files

| File | What it does |
| ---- | ------------ |
| [`student_grade_validator.cpp`](student_grade_validator.cpp) | Asks for 5 student grades (0 to 100), rejects letters and out-of-range numbers, then prints the average and the highest grade |
| [`daily_temp_checker.cpp`](daily_temp_checker.cpp) | Same project for 7 daily temperatures (-10 to 45). Prints the average and the lowest. **Has a bug with the lowest** (see below) |

## What I learned

- A `for` loop for how many values I need, with a `do-while` inside it to keep asking until the value is valid
- A `bool bad` flag: set it to `false` at the start of each try, and to `true` when the input is invalid. The loop repeats `while (bad)`.
- The full fix for a letter typed by mistake (from Day 7):
  ```cpp
  if (cin.fail()){
      cin.clear();            // clear the error state
      cin.ignore(1000, '\n'); // throw away the bad input
  }
  ```
- `sum / 5.0` or `sum / 7.0` uses a decimal number so the average keeps its decimals (`int / int` cuts them off)
- Using `double` for the average
- Tracking the highest with `if (grade > highest)`

## Things to fix

- `daily_temp_checker.cpp`: `lowest` starts at `0`, so if every temperature is above 0, it prints `Lowest: 0`. For example, entering 10, 12, 14, 11, 13, 15, 16 shows `Lowest: 0` instead of 10. Starting `lowest` with the first temperature fixes it.
