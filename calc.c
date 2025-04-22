#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char operator;
    double num1, num2, results, fees, totalFees, upKeep;
    int band;

    // Display the menu of available operators
    printf("Enter an operator (+, -, *, /, ^, r, s, c, t, h):\n");
    printf("  + : Addition\n");
    printf("  - : Subtraction\n");
    printf("  * : Multiplication\n");
    printf("  / : Division\n");
    printf("  ^ : Power\n");
    printf("  r : Square root\n");
    printf("  s : Sine\n");
    printf("  c : Cosine\n");
    printf("  t : Tangent\n");
    
    scanf(" %c", &operator);

    // Handle arithmetic and scientific operations
    if (operator == '+' || operator == '-' || operator == '*' || operator == '/' || operator == '^' || operator == 'r' || operator == 's' || operator == 'c' || operator == 't') {
        printf("Enter the first number: ");
        if (scanf("%lf", &num1) != 1) {
            printf("Error: invalid input.\n");
            return 1;
        }

        if (operator != 'r' && operator != 's' && operator != 'c' && operator != 't') {
            printf("Enter the second number: ");
            if (scanf("%lf", &num2) != 1) {
                printf("be serious ong'er\n");
                return 1;
            }
        }
   

        // Calculate fees and upKeep based on band
        switch (band) {
            case 1:
                fees = totalFees * 0.8;
                upKeep = totalFees * 0.2;
                break;
            case 2:
                fees = totalFees * 0.7;
                upKeep = totalFees * 0.3;
                break;
            case 3:
                fees = totalFees * 0.3;
                upKeep = totalFees * 0.4;
                break;
        }
        printf("Fees: %.2lf, upKeep: %.2lf\n", fees, upKeep);
        return 0; // Exit after loan calculation
    } else {
        printf("look for a girlfreind !!\n");
        return 1;
    }

    // Perform calculations based on the operator
    switch (operator) {
        case '+':
            results = num1 + num2;
            printf("Result: %.2lf\n", results);
            break;
        case '-':
            results = num1 - num2;
            printf("Result: %.2lf\n", results);
            break;
        case '*':
            results = num1 * num2;
            printf("Result: %.2lf\n", results);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed\n");
            } else {
                results = num1 / num2;
                printf("Result: %.2lf\n", results);
            }
            break;
        case '^':
            results = pow(num1, num2);
            printf("Result: %.2lf\n", results);
            break;
        case 'r':
            if (num1 >= 0) {
                results = sqrt(num1);
                printf("Result: %.2lf\n", results);
            } else {
                printf("Error: Square root of a negative number is not allowed.\n");
            }
            break;
        case 's':
            results = sin(num1);
            printf("Result: %.2lf\n", results);
            break;
        case 'c':
            results = cos(num1);
            printf("Result: %.2lf\n", results);
            break;
        case 't':
            results = tan(num1);
            printf("Result: %.2lf\n", results);
            break;
        default:
            printf("Exed error urred.\n");
    }

    return 0;
}
