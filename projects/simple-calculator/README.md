# Simple Calculator

A calculator for two numbers, written twice to compare two ways of choosing an operation.

| File | Approach |
|---|---|
| `calculator-if-else.cpp` | `if / else if` chain |
| `calculator-switch.cpp` | `switch` statement |

## Concepts used
- `cin` for input and `iomanip` (`fixed`, `setprecision`) for output formatting
- Conditions: `if / else` and `switch`
- A check to prevent division by zero

## Usage
Enter the first number, the second number, then the operation code:

| Code | Operation |
|---|---|
| 1 | multiply |
| 2 | add |
| 3 | subtract |
| 4 | divide |

Example: `10 5 2` prints `a + b = 15.000`.

## Run
```bash
g++ calculator-switch.cpp -o calculator
./calculator
```

## Next steps
- Print the menu before asking for input.
- In the `if / else` version, the `error` branch belongs to the `b != 0` check, so any operation with `b = 0` prints `error`, not only division. An unknown operation code prints nothing. The `switch` version handles both cases correctly.
