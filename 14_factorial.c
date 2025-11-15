#include <stdio.h>

int main() {
    int n, i, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial does not exist for negative numbers");
    else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %d", n, fact);
    }

    return 0;
}

