# Day 7 - November 18, 2026

**Topic:** What happens when the user types a letter, and a quiz with score tracking

## Files

| File | What it does |
| ---- | ------------ |
| [`fix_the_bug.cpp`](fix_the_bug.cpp) | An experiment: type a letter instead of a number and see why the program gets stuck (**infinite loop on purpose**) |
| [`quiz_with_score_tracking.cpp`](quiz_with_score_tracking.cpp) | A 3 question quiz (answers 1, 2, or 3) that prints `Score: x / 3` at the end |

## What I learned

- `cin.fail()` is true when the user types something that doesn't match the variable type (like a letter for an `int`)
- When `cin` fails, it goes into an error state and **stops reading**. `num` stays `0`, so `num < 1` stays true and the loop never ends.
- `cin.clear()` clears the error state, but the bad letter is still waiting in the input
- `cin.ignore(1000, '\n')` throws away up to 1000 characters (or until Enter), which removes the bad input. It's commented out in `fix_the_bug.cpp`, which is why the program is stuck. I use both in Day 8.
- Quiz: one `do-while` per question
  - Correct answer: `++score`
  - Wrong answer (a valid choice): says `Wrong!` and moves on
  - Invalid answer (not 1 to 3): says `Invalid answer!` and asks the same question again
- `score` is created before the questions and is shown at the end

## Notes to self

- Run `fix_the_bug.cpp` and type `abc` to see the infinite loop (press Ctrl+C to stop it).
