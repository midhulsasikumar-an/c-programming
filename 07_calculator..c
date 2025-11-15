#include <stdio.h>

int main() {
    char op;
    float num1, num2;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (op) {
        case '+':
            printf("Result: %.2f", num1 + num2);
            break;
        case '-':
            printf("Result: %.2f", num1 - num2);
            break;
        case '*':
            printf("Result: %.2f", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2f", num1 / num2);
            else
                printf("Error! Division by zero is not allowed.");
            break;
        default:
            printf("Invalid operator!");
    }

    return 0;
}

