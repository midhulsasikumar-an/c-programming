
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", sum / n);

    return 0;
}
