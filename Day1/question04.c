#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("Enter Number1: ");
    scanf("%lf", &num1);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    printf("Enter Number2: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1; 
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1; 
    }

    printf("Result: %.2lf\n", result);

    return 0;
}