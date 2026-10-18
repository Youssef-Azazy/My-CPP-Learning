# Age Calculator

Takes an age in years and prints it as months, weeks, days, hours, minutes and seconds.

## Concepts used
- Variables and data types (`int`, `double`)
- Arithmetic operators
- Output formatting with `iomanip`

## Run
```bash
g++ main.cpp -o age_calculator
./age_calculator
```

## Next steps
- The days value is computed as `months * 3`, which gives 36 days per year instead of about 365. Use `years * 365` for days and `days / 7` for weeks.
- Ask for a birth date and compute the exact age.
