# Memory Unit Converter

Takes a number of bits and converts it to bytes, KB, MB, GB and TB.

## Concepts used
- Variables and data types (`int`, `double`)
- Arithmetic operators
- Output formatting with `iomanip`

## Run
```bash
g++ main.cpp -o converter
./converter
```

Example input: `8192` (bits).

## Next steps
- `bit / 8` is an integer division, so the byte value loses its fraction. Using `bit / 8.0` fixes that.
- Let the user choose the input unit.
