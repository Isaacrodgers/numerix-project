# Simple Calculator - Numerix-project

This is a terminal-based calculator application written in **C**, capable of performing both **arithmetic** and **scientific** operations, as well as a **loan fee breakdown** based on different education bands.

## 🔧 Features

- Basic Arithmetic:
  - `+` Addition
  - `-` Subtraction
  - `*` Multiplication
  - `/` Division (with zero-check)
  - `^` Power

- Scientific Functions:
  - `r` Square root
  - `s` Sine
  - `c` Cosine
  - `t` Tangent

- Special Calculation:
  - `h` Loan fee calculation for education, based on user input for band (1, 2, or 3)

## How to Compile

You can compile the program using `gcc`:

```bash
gcc calc.c -o calc -lm
```