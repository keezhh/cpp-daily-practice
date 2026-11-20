# Day 6 - November 17, 2026

**Topic:** Nested loops with numbers

## Files

| File | What it does |
| ---- | ------------ |
| [`multiplication_table_1_to_5.cpp`](multiplication_table_1_to_5.cpp) | Prints a 5 x 5 multiplication table |
| [`number_pyramid_rows.cpp`](number_pyramid_rows.cpp) | Prints `1`, `12`, `123`, `1234`, `12345` (one row each) |

## What I learned

- In a nested loop, the **outer** variable `i` is the row and the **inner** variable `j` is the column
- `j` starts again at 1 on every new row, because the inner loop restarts each time
- The multiplication table prints `i * j` followed by a space (`" "`), so the numbers stay on one row
- `'\n'` goes after the inner loop, so each row starts on a new line
- In the pyramid, the inner loop runs up to `i`, so row 3 has 3 numbers
- Printing `i` repeats the same digit in the row (`333`), but printing `j` counts up (`123`)

## Output of the multiplication table

```
1 2 3 4 5
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20
5 10 15 20 25
```
