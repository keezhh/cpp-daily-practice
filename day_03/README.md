# Day 3 - November 13, 2026

**Topic:** Input validation with `do-while`, and multiples with `%`

## Files

| File | Loop | What it does |
| ---- | ---- | ------------ |
| [`first_input_validation.cpp`](first_input_validation.cpp) | `do-while` | Keeps asking for a number until it is between 1 and 10 |
| [`second_input_validation.cpp`](second_input_validation.cpp) | `do-while` | Asks for an age (1 to 120) and says `Too low!` or `Too high!` if it's wrong |
| [`multiple_of_3.cpp`](multiple_of_3.cpp) | `for` | Counts and adds the multiples of 3 from 1 to 30 (`Count: 10`, `Sum: 165`) |

## What I learned

- **Input validation** means checking what the user typed and asking again if it's wrong
- `do-while` is perfect for this because it always asks at least once
- The `while (...)` condition is the **invalid** case: the loop repeats only while the input is bad, and stops after a valid input
- `||` (OR): `x < 1 || x > 10` is true when the number is outside the range
- `else if` lets me show a different message for each problem (`Too low!` / `Too high!`)
- `i % 3 == 0` finds multiples of 3
- I can count and add in the same loop: `++count` and `sum += i`

## Notes to self

- Typing a letter instead of a number is not handled yet. I learn how to deal with it on Day 7 and Day 8.
