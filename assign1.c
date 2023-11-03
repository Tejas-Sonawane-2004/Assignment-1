#include <stdio.h>
#include <math.h> // Include the math library for the pow function

// Function to calculate the power of a number
double power(double base, double exponent) {
    return pow(base, exponent);
}

int main() {
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /, ^, h for hexadecimal): ");
    scanf(" %c", &operator);

    if (operator != 'h') {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
    } else {
        printf("Enter a decimal number: ");
        scanf("%lf", &num1);
    }

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        case '^':
            printf("%.2lf ^ %.2lf = %.2lf\n", num1, num2, power(num1, num2));
            break;
        case 'h':
            printf("%.0lf in hexadecimal is: %X\n", num1);
            break;
        default:
            printf("Error! Operator is not valid.\n");
    }

    return 0;
}
