#include <stdio.h>

int main() {
    int n, i;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("First %d Even Numbers:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", 2 * i);
    }

    printf("\n\nFirst %d Odd Numbers:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", 2 * i - 1);
    }

    return 0;
}

