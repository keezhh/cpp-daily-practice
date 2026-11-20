# Day 5 - November 16, 2026

**Topic:** Nested loops (star patterns) and a simple ATM

## Files

| File | What it does |
| ---- | ------------ |
| [`first_nested_loop.cpp`](first_nested_loop.cpp) | Prints 3 rows of 5 stars (a rectangle) |
| [`right_triangle_of_stars.cpp`](right_triangle_of_stars.cpp) | Right triangle: 1 star, then 2, up to 5 |
| [`upside_down_triangle.cpp`](upside_down_triangle.cpp) | Upside down triangle: 5 stars, then 4, down to 1 |
| [`square_with_your_own_size.cpp`](square_with_your_own_size.cpp) | Asks for a size (1 to 10) and prints a square of stars that size |
| [`simple_atm.cpp`](simple_atm.cpp) | ATM menu: check balance, deposit, withdraw, exit. Starts with a balance of 1000 |

## What I learned

- A **nested loop** is a loop inside a loop
  - The **outer** loop is the row (one round per row)
  - The **inner** loop is what's in the row (one star per round)
- `cout << '\n';` goes after the inner loop, so it runs once per row
- The inner loop controls the shape:
  - `j <= 5` gives a rectangle (same stars every row)
  - `j <= i` gives a right triangle (the row number is the star count)
  - `j = 5; j >= i; j--` gives the upside down triangle
- In the square, both loops use the same `size`, so rows = columns
- ATM: a `do-while` menu with `balance += amount` for deposits and `balance -= amount` for withdrawals
- The ATM checks for bad input: an amount of 0 or less is `Invalid amount!`, and withdrawing more than the balance is `Insufficient funds!`
