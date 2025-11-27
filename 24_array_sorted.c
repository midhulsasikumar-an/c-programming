
#include <stdio.h>

int main() {
    int n, i, sorted = 1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i+1]) {
            sorted = 0;
            break;
        }
    }

    if(sorted)
        printf("Array is sorted.\n");
    else
        printf("Array is NOT sorted.\n");

    return 0;
}
