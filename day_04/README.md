# Day 4 - November 14, 2026

**Topic:** Menus and a guessing game with `do-while`

## Files

| File | Loop | What it does |
| ---- | ---- | ------------ |
| [`guess_the_number.cpp`](guess_the_number.cpp) | `do-while` | Guess a secret number (1 to 10). Says `Too low!` or `Too high!` and counts the attempts |
| [`my_first_intermediate_activity.cpp`](my_first_intermediate_activity.cpp) | `do-while` | Menu with Add, Multiply, and Quit. Keeps going until I choose 3 |
| [`third_input_validation.cpp`](third_input_validation.cpp) | `do-while` | Menu with Say hello, Say goodbye, and Quit. Shows `Invalid choice!` for other numbers |

## What I learned

- A **menu** is a `do-while` loop: show the options, read the choice, do something, repeat until the user picks Quit
- `const int secret = 7;` makes a value that can't be changed
- `attempts` only goes up with `++attempts` when the guess is in range, so out-of-range guesses don't count
- `!=` means "not equal". `choice != 3` keeps the menu running.
- `&&` (AND): `choice != 3 && choice != 2 && choice != 1` is true only when the choice is not any of the options
- `cin >> a >> b` reads two numbers in one line
- The message after the loop (`Goodbye!`, `Program ended.`) prints only once, when the loop ends

## Notes to self

- In the guessing game, the loop ends when `guess == secret` (`while (guess != secret)`).
