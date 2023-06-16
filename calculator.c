#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        if (num2 == 0) {
            printf("Error: Cannot divide by zero.");
            return 1;
        } else {
            result = num1 / num2;
        }
    } else {
        printf("Invalid operator.");
        return 1;
    }

    printf("Result: %f\n", result);
    return 0;
}
