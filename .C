#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("===================\n");
    printf("   SIMPLE C CALC   \n");
    printf("===================\n");
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Error: Invalid input.\n");
        return 1;
    }

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0.0) {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}
