#include <stdio.h>
#define size 100

int main() {
    int arr[size];
    int n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   
    }

    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {       
            sum = sum + arr[i];
        }
    }

    printf("%d is the sum of elements at even index positions", sum);

    return 0;
}
