#include <stdio.h>
#define MAX 100

int main() {
    int N, Arr[MAX], i;

    printf("Enter the size of an Array: ");
    scanf("%d", &N);

    printf("\nEnter the elements of the Array: ");
    for(i = 0; i < N; i++) {
        scanf("%d", &Arr[i]);   
    }

    printf("\nInput Array: ");
    for(i = 0; i < N; i++) {
        printf("%d ", Arr[i]);
    }

    printf("\nReverse of Array: ");
    for(i = N - 1; i >= 0; i--) {   
        printf("%d ", Arr[i]);
    }

    return 0;
}
