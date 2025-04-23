#Simple Calculator - Numerix-project
This project is a terminal-based calculator application written entirely in C, designed to perform both arithmetic and scientific operations.

 FEATURES
The calculator supports the following functionality:

1. Basic Arithmetic Operations
    Addition (+): Adds two numbers.
    Subtraction (-): Subtracts one number from another.
    Multiplication (*): Multiplies two numbers.
    Division (/): Divides one number by another. Includes a safeguard to avoid division by zero.
    Exponentiation (^): Raises a number to the power of another.
2. Scientific Functions
    Square Root (r): Computes the square root of a number.
    Sine (s): Calculates the sine of an angle (in radians).
    Cosine (c): Calculates the cosine of an angle (in radians).
    Tangent (t): Calculates the tangent of an angle (in radians).
3.How to Compile
To run the calculator, you need to compile the source code using the GCC (GNU Compiler Collection). The compilation process is straightforward:

Open your terminal.

Run the following command:

bash
gcc calcCODE.c -o calcCODE -lm
calcCODE.c: The source code file.
-o calcCODE: Specifies the output binary file name (calcCODE).
-lm: Links the math library, which is necessary for scientific functions like sine, cosine, etc.
After successful compilation, you can execute the program using ./calcCODE.
