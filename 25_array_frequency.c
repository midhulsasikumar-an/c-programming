
#include <stdio.h>

int main() {
    int n, i, j, visited;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        visited = 0;

        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                visited = 1;
                break;
            }
        }

        if(!visited) {
            int count = 1;
            for(j = i + 1; j < n; j++) {
                if(arr[i] == arr[j])
                    count++;
            }
            printf("%d occurs %d times\n", arr[i], count);
        }
    }

    return 0;
}
