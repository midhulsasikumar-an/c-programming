#include <stdio.h>

int main() {
    int num , sum = 0, i;

    printf("Enter N: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        sum += i;
    }

    printf("Sum of first %d numbers = %d", num , sum);

    return 0;
}

