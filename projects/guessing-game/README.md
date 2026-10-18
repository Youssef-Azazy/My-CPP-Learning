# Guessing Game

A console game: the program picks a random number from 1 to 100 and you have 5 tries to find it.

## Concepts used
- `rand()` and `srand(time(0))` for random numbers
- `while` loop with a tries counter
- Input validation with `continue`
- A function (`game`) that compares the guess with the secret number

## How it works
1. The program picks a secret number.
2. You enter a guess. It tells you `Too Low!` or `Too High!`.
3. A guess outside 1 to 100 shows an error message.
4. You win if you guess it, and you lose after 5 tries (the number is then revealed).

## Run
```bash
g++ main.cpp -o guessing_game
./guessing_game
```

## Next steps
- Ask to play again at the end.
- Add difficulty levels (a bigger range or fewer tries).
